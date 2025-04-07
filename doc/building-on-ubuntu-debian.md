# Ubuntu / Debian building instructions

Tested on a pristine:
 - Ubuntu 20.04
 - Debian 12

## Install

### dependnencies 

``` bash
sudo apt install git autoconf libtool build-essential libboost-all-dev libssl-dev libdb++-dev libminiupnpc-dev automake
```

### twister-core

1. `sudo useradd -m twister` - create new user with home directory
2. `su twister` - login and navigate the home dir `~/` to continue
5. `git clone https://github.com/twisterarmy/twister-core.git`
6. `cd twister-core`
7. `./autotool.sh`
8. `./configure` (on ARM architectures, run: `./configure --with-boost-libdir=/usr/lib/arm-linux-gnueabihf --disable-sse2`)
9. `make`

## twister-html (web-ui)

1. `mkdir ~/.twister`
2. `echo -e "rpcuser=user\nrpcpassword=pwd\nrpcallowip=127.0.0.1" > ~/.twister/twister.conf`
3. `chmod 600 ~/.twister/twister.conf`
4. `git clone https://github.com/twisterarmy/twister-html.git ~/.twister/html`
5. `cd ~/.twister/html`

## start

1. `cd twister-core`
2. `./twisterd` (or `./twisterd -port=28333` - if you want to be reachable for [seeds](https://twisterarmy.github.io/network))
4. open http://user:pwd@127.0.0.1:28332/index.html
5. create your account !
