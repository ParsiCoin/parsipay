Website :

https://parsicoin.net

-= Building ParsiPay (ParsiCoin GUI Wallet) =-

On *nix:

Dependencies: Git, GCC 4.7.3 or later (Visual Studio 2013 or later for windows), CMake 2.8.6 or later, Boost 1.55 or later and Qt5.

You may download them from:

http://microsoft.com/

http://gcc.gnu.org/

http://www.cmake.org/

http://www.boost.org/

http://www.qt.io/

Alternatively, it may be possible to install them using a package manager.

Build on *nix :

git clone https://github.com/parsicoin/parsipay && cd parsipay && git clone https://github.com/parsicoin/parsicoin cryptonote

then :

mkdir build && cd build && cmake .. && make

on Windows:

git clone https://github.com/parsicoin/parsipay && cd parsipay && git clone https://github.com/parsicoin/parsicoin cryptonote

Then: (for MSVS 2015 & Qt 5.8.0)

cmake -G "Visual Studio 14" -DCMAKE_PREFIX_PATH=C:\Qt\Qt5.8.0\5.8\msvc2015

This will create a parsicoin.sln file which you can open in Visual Studio and build.

Good luck!