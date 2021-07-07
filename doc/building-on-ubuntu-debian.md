# Ubuntu / Debian building instructions

Tested on a pristine:
 - Ubuntu 13.10 amd64

## Install

1. sudo apt-get update
2. sudo apt-get install git autoconf libtool build-essential libboost-all-dev libssl-dev libdb++-dev libminiupnpc-dev automake
3. git clone https://github.com/twisterarmy/twister-core.git
4. cd twister-core
5. git checkout twisterarmy
6. ./autotool.sh
7. ./configure (on ARM architectures, run: `./configure --with-boost-libdir=/usr/lib/arm-linux-gnueabihf --disable-sse2`)
8. make

## Configuration & web gui

1. mkdir ~/.twister
2. echo -e "rpcuser=user\nrpcpassword=pwd" > ~/.twister/twister.conf
3. chmod 600 ~/.twister/twister.conf
4. git clone https://github.com/twisterarmy/twister-html.git ~/.twister/html
5. cd ~/.twister/html
6. git checkout twisterarmy

## Start

1. cd twister-core
2. ./twisterd -rpcuser=user -rpcpassword=pwd -rpcallowip=127.0.0.1
3. Open http://127.0.0.1:28332/index.html and use the user/pwd credentials
4. Create your account !
