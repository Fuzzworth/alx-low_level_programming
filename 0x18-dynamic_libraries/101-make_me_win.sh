#!/bin/bash
curl -o librand.so https://github.com/Fuzzworth/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librand.so
LD_PRELOAD=./librand.so
