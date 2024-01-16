#!/bin/bash
echo "Building AutoKraken..."

cmake -G "MinGW Makefiles" -B ./build

cmake --build ./build

./build/AutoKraken.exe