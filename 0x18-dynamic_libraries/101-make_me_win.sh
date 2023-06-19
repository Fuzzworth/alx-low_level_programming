#!/bin/bash
wget https://raw.githubusercontent.com/Fuzzworth/alx-low_level_programming/master/0x18-dynamic_libraries/librand.so /tmp/librand.so
export LD_PRELOAD="/tmp/librand.so"
