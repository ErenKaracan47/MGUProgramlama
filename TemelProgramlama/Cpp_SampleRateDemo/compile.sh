#!/bin/bash

g++ -o main.o main.cpp SampleRateDemo.cpp
./main.o
python3 plotscript.py