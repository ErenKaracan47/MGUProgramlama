#!/bin/bash

g++ -std=c++17 -o main.o main.cpp lib/wave.cpp
./main.o
open -a "Google Chrome.app" plot.svg
rm main.o