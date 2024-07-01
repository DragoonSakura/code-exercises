#!/bin/bash

VERSION="1.0"

compileWithTest () {
    echo "clang++ -Wall -std=c++17 -c $1 -o $1.o"
    echo "clang++ -Wall -std=c++17  $1.o -o $1"
}

# Optstrings
# - c: compile (takes c++ filename)
# - r: compile and run (takes c++ filename)
# - d: delete binaries and binary directorys (also intermediates)
# - v: Show script version
# NOTE: options c and r create bin and bin-int directories (if not available)

OPTSTRING=":c:r:dv"

while getopts ${OPTSTRING} opt; do

    case ${opt} in
        c)
            # Create bin-int (if not exists)
            echo "==== Ensuring bin-int directory ===="
            mkdir -p bin-int
            # Create bin (if not exists)
            echo "==== Ensuring bin-int directory ===="
            mkdir -p bin
            echo "==== Compiling file ===="
            compileWithTest "${OPTARG}"
            ;;
        d)
            rm -rf bin-int
            rm -rf bin
            ;;
        r)
            # Create bin-int (if not exists)
            echo "==== Ensuring bin-int directory ===="
            mkdir -p bin-int
            # Create bin (if not exists)
            echo "==== Ensuring bin-int directory ===="
            mkdir -p bin
            echo "==== Compiling file ===="
            compileWithTest "${OPTARG}"
            echo "==== Running binary from file ===="
            ;;
        v)
            echo "compile_ex version: $VERSION"
            ;;
        :)
            echo "Invalid Option -${OPTARG}. Requires an argument."
            exit 1
            ;;
        ?)
            echo "Invalid Option -${OPTARG}."
            exit 1
            ;;
    esac

done
