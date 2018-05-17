#!/bin/bash


print_usage() {
    echo "usage: $0"
    echo ""
    echo "Builds the game"
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

build() {

    cd ./rogue_src
    ./configure

    echo "building"
    make

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
}

build

echo ""
echo "Build complete. Executable created:"
echo "  $(realpath rogue)"

