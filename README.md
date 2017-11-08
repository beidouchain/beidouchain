BeidouChain
==========

[BeidouChain] is an open source, enterprise level, security enhanced blockchain platform, which forks from Bitcoin Core and offers a rich set of features including augmented security, embedding geographic information and strengthen government regulation. 

    Copyright (c) 2014-2017 Huasystem Ltd
    License: GNU General Public License version 3, see COPYING

    Portions copyright (c) 2009-2016 The Bitcoin Core developers
    Portions copyright many others - see individual files


System requirements
-------------------

These compilation instructions have been tested on Ubuntu 14.04 x64 only.

C++ compilers are memory-hungry, so it is recommended to have at least 2 GB of memory available when compiling BeidouChain. 


Linux Build Notes (on Ubuntu 14.04 x64)
=================

Install dependencies
--------------------

    sudo apt-get update
    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils
    sudo apt-get install libboost-all-dev
    sudo apt-get install git
    sudo apt-get install software-properties-common
    sudo add-apt-repository ppa:bitcoin/bitcoin
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev

Compile BeidouChain for Ubuntu (64-bit)
-----------------------------

    ./autogen.sh
    ./configure
    make

Notes
-----

* This will build `beidouchaind` and `beidouchain-cli` in the `src` directory.

* The release is built with GCC after which `strip beidouchaind` strings the debug symbols, which reduces the executable size by about 90%.


