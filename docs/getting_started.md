Getting Started with FastParseX

This guide explains how to install and use FastParseX.

## Installation

FastParseX uses CMake as its build system.

mkdir build
cd build
cmake ..
cmake --build .

To install system-wide:

sudo cmake --install .

## Basic Usage

Example: parsing a CSV file

#include <fastparsex/csv/parser.hpp>

int main() {
    fp::CSVParser parser("data.csv");
    parser.parse();
    return 0;
}

More examples are available in the examples/ directory.
