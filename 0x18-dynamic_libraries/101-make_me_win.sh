#!/bin/bash
wget https://raw.githubusercontent.com/Fuzzworth/alx-low_level_programming/master/0x18-dynamic_libraries/librand.so librand.so
export LD_PRELOAD="./librand.so"
