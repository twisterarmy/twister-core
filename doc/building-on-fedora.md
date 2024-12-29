# Fedora building instructions

Tested on:
 - Fedora 41 amd64

## Install

1. sudo dnf install git autoconf libtool make boost-devel openssl-devel libdb-cxx-devel miniupnpc-devel automake
2. git clone https://github.com/twisterarmy/twister-core.git
3. cd twister-core
4. ./autotool.sh
5. ./configure (on ARM architectures, run: `./configure --with-boost-libdir=/usr/lib/arm-linux-gnueabihf --disable-sse2`)
6. make

## Configuration & web gui

1. mkdir ~/.twister
2. echo -e "rpcuser=user\nrpcpassword=pwd" > ~/.twister/twister.conf
3. chmod 600 ~/.twister/twister.conf
4. git clone https://github.com/twisterarmy/twister-html.git ~/.twister/html
5. cd ~/.twister/html

## Start

1. cd twister-core
2. ./twisterd -rpcuser=user -rpcpassword=pwd -rpcallowip=127.0.0.1
3. Open http://127.0.0.1:28332/index.html and use the user/pwd credentials
4. Create your account !
