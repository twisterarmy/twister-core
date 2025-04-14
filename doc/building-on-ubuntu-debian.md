# Ubuntu / Debian building instructions

> [!NOTE]
> Tested on a pristine:
> - Ubuntu 20.04, 22.04, 24.04
> - Debian 12

1. System dependencies
``` bash
sudo apt install git autoconf automake build-essential libtool\
                 libboost-all-dev libssl-dev libdb++-dev libminiupnpc-dev
```
2. Build [twister-core](https://github.com/twisterarmy/twister-core)
    - `sudo useradd -m twister` - create new user with home directory (set password with `sudo passwd twister`)
    - `su twister` - login and navigate (with `cd`) into the home dir `/home/twister` to continue
    - `git clone https://github.com/twisterarmy/twister-core.git`
    - `cd twister-core`
    - `./autotool.sh`
    - `./configure` (on ARM architectures, run: `./configure --with-boost-libdir=/usr/lib/arm-linux-gnueabihf --disable-sse2`)
    - `make`
3. Clone [twister-html](https://github.com/twisterarmy/twister-html) (web UI)
    - `mkdir ~/.twister`
    - `echo -e "rpcuser=user\nrpcpassword=pwd\nrpcallowip=127.0.0.1" > ~/.twister/twister.conf`
    - `chmod 600 ~/.twister/twister.conf`
    - `git clone https://github.com/twisterarmy/twister-html.git ~/.twister/html`
4. Launch twister
    - `./twisterd`
    - open http://127.0.0.1:28332, enter `user` and `pwd` in the authorization dialog
    - create your account!
