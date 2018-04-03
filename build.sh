#!/bin/bash


print_usage() {
    echo "usage: $0"
    echo ""
    echo "Builds the game with and without monsters"
    echo ""
    echo "optional arguments:"
    echo -e "  -?, -h, --help\t show this help message and exit"
}

if [[ "$1" == "-?" || "$1" == "-h" || "$1" == "--help" ]]; then
    print_usage
    exit 0
elif [ $# -ne 0 ]; then
    echo "error: unexpected arguments"
    print_usage
    exit 1
fi

with_monsters="rogue_monsters"
without_monsters="rogue_without_monsters"

build() {
    # parameters:
    #   $1: whether to compile with monsters, use $with_monsters or $without_monsters

    if [[ "$1" != $with_monsters && "$1" != $without_monsters ]]; then
        echo "error: invalid build option: $1"
        exit 1
    fi

    cd ./rogue_src
    make clean
    ./configure

    if [ "$1" == $with_monsters ]; then
        echo "building with monsters"
        make -e EXTRA=-DSPAWN_MONSTERS
    elif [ "$1" == $without_monsters ]; then
        echo "building without monsters"
        make
    fi

    if [ $? -eq 0 ]; then
        # make was succesful
        mv -t .. rogue rogue.6 rogue.cat rogue.doc rogue.html rogue.me
        make clean
    else
        # make failed
        echo "Build failed."
        exit $?
    fi

    cd ..
    mv rogue $1

}

build $with_monsters
build $without_monsters

echo "Build complete. Executables created:"
echo "  $(realpath $with_monsters)"
echo "  $(realpath $without_monsters)"

