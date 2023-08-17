#!/bin/bash

install () {
    rm -rf build-install
    cmake -S. -Bbuild-install -DCMAKE_BUILD_TYPE=Release -DCMAKE_OSX_ARCHITECTURES='arm64' -DCMAKE_OSX_SYSROOT='macosx' -DCMAKE_OSX_DEPLOYMENT_TARGET='13.0'
    cmake --build build-install --config Release --target install/strip
    rm -rf build-install
}

uninstall () {
    rm -rfv /usr/local/lib/cmake/mapper
    rm -rfv /usr/local/lib/cmake/varchunk
    rm -rfv /usr/local/lib/cmake/lv2lint
    rm -rfv /usr/local/lib/mapper.a
    rm -rfv /usr/local/lib/libvarchunk.a
    rm -rfv /usr/local/bin/lv2lint
}

reinstall () {
    uninstall
    install
}

clean_xcode () {
    rm -rf build-xcode
}

configure_xcode () {
    cmake -S. -Bbuild-xcode -GXcode -DCMAKE_OSX_ARCHITECTURES='arm64' -DCMAKE_OSX_SYSROOT='macosx' -DCMAKE_OSX_DEPLOYMENT_TARGET='12.0' -DCMAKE_CXX_FLAGS_DEBUG_INIT='-Werror -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion' -DCMAKE_CXX_FLAGS_RELEASE_INIT='-Ofast -flto -fomit-frame-pointer' -DCMAKE_SIZEOF_VOID_P=8
}

open_xcode () {
    sleep 2
    open build-xcode/*.xcodeproj
}

xcode () {
    clean_xcode
    configure_xcode
    open_xcode
}

invalid () {
    echo "no valid arguments provided"
}

# https://stackoverflow.com/questions/3601515/how-to-check-if-a-variable-is-set-in-bash
if [ -z ${1+x} ]; then invalid; else if [ -z ${2+x} ]; then eval "$1" || invalid; else eval "$1_$2" || invalid; fi; fi
