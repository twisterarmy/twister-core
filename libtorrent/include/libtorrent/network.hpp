#include "libtorrent/address.hpp"

namespace libtorrent
{
	inline bool is_yggdrasil(address const& a)
	{
		return a.is_v6() && (a.to_v6().to_bytes()[0] & 0xFE) == 0x02;
	}

	inline bool is_connectable(address const& a, address const& b)
	{
		if (a.is_v4() && b.is_v4()) {
			return true;
		}

		// compute once
		const bool a_is_ygg = is_yggdrasil(a);
		const bool b_is_ygg = is_yggdrasil(b);

		return a.is_v6() && b.is_v6() && ((!a_is_ygg && !b_is_ygg) || (a_is_ygg && b_is_ygg));
	}
}