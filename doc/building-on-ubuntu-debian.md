# Ubuntu / Debian building instructions

Tested on a pristine:
 - Ubuntu 20.04
 - Debian 12

## Install

1. `sudo apt update`
2. `sudo apt install git autoconf libtool build-essential libboost-all-dev libssl-dev libdb++-dev libminiupnpc-dev automake`
3. `git clone https://github.com/twisterarmy/twister-core.git`
4. `cd twister-core`
5. `./autotool.sh`
6. `./configure` (on ARM architectures, run: `./configure --with-boost-libdir=/usr/lib/arm-linux-gnueabihf --disable-sse2`)
7. `make`

## Configuration & web gui

1. `mkdir ~/.twister`
2. `echo -e "rpcuser=user\nrpcpassword=pwd\nrpcallowip=127.0.0.1" > ~/.twister/twister.conf`
3. `chmod 600 ~/.twister/twister.conf`
4. `git clone https://github.com/twisterarmy/twister-html.git ~/.twister/html`
5. `cd ~/.twister/html`

## Start

1. `cd twister-core`
2. `./twisterd` (or `./twisterd -port=28333` - if you want to be reachable for [seeds](https://twisterarmy.github.io/network))
4. open http://user:pwd@127.0.0.1:28332/index.html
5. create your account !
