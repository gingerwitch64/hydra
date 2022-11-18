# Building Hydra
This document will explain how to build Hydra and prerequisites needed.

## Prerequisites
Make sure you have all the prerequisites needed to build.
### Ubuntu / Debian
```bash
sudo apt install mtools xorriso qemu qemu-system mingw-w64 ovmf build-essential nasm bison flex libgmp3-dev libmpc-dev libmpfr-dev texinfo cmake ninja-build
```
### Arch Linux / Manjaro
```bash
sudo pacman -S --needed base-devel mtools libisoburn qemu qemu-arch-extra mingw-w64-gcc mingw-w64-binutils edk2-ovmf nasm gmp libmpc mpfr cmake ninja
```

## Downloading
 - You can download the latest release tarball and unpack it:
   ```
   xz -cd hydra-0.1.x.tar.xz | tar xvf -
   ```
   Replace the "X" with the version number of the release.
 - You can also upgrade between releases by patching. To install
   by patching, download all the patch files for each version
   since your current version, then you can enter the top-level 
   directory of the Hydra/Inferno source and execute:
   ```
   patch -p1
   ```
 - You can also clone the repository although we'd highly
   recommend not using the `main` branch but any of the release
   branches.

## Compiling
Once you are configured, you can build Hydra/Inferno with:
```
cmake -GNinja .
ninja
```

This will build the ISO and save it into the `$HYDRA_ROOT/Build` folder.

## Emulating
You can use the ISO in other virtualization software such as VirtualBox or
VMWare or use QEMU to emulate it. You can either write up the command
yourself or use the default QEMU command that comes with CMakeLists.txt
which can be ran with `ninja emulate`.
