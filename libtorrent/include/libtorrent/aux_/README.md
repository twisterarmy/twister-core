# Development note

According to [PR#20](https://github.com/twisterarmy/twister-core/pull/20), this directory includes the latest slice (`7c27969d1b78961652027929fe84afc095a12bdc`) of the [libtorrent](https://github.com/arvidn/libtorrent/) repository,
but the `session_impl.hpp` file still retains the legacy version until its features are upgraded.

We can't use the original `libtorrent` API because the [legacy twister implementation](https://github.com/miguelfreitas/twister-core) contains non-standard features.

Please keep this in mind when making new contributions!