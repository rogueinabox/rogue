#!/bin/bash


print_usage() {
    echo "usage: $0 MONSTER_OPTION"
    echo ""
    echo "arguments:"
    echo -e "MONSTER_OPTION\t 'm' for building with monsters, or 'no_m' for building without"
}

if [ $# -eq 0 ]; then
    print_usage
    exit 1
elif [ $# -ne 1 ]; then
    print_usage
    exit 1
elif [[ "$1" != "m" && "$1" != "no_m" ]]; then
    echo -e "error: '$1' is not a valid MONSTER_OPTION \n"
    print_usage
    exit 1
fi


cd ./rogue_src
make clean
./configure

if [ "$1" == "m" ]; then
    echo "building with monsters"
    make -e EXTRA=-DSPAWN_MONSTERS
else
    echo "building without monsters"
    make
fi

if [ $? -eq 0 ]; then
    # make was succesful
    mv -t .. rogue rogue.6 rogue.cat rogue.doc rogue.html rogue.me
    make clean
    echo "Build complete. Executable created in $(realpath ../rogue)"
else
    # make failed
    echo "Build failed."
    exit $?
fi

