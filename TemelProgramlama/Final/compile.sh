#!/bin/bash

g++ -o main.o main.cpp lib/wave.cpp
./main.o
python3 plotscript.py