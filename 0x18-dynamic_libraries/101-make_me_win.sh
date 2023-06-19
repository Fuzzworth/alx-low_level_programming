#!/bin/bash
curl -o /tmp/librand.so https://github.com/Fuzzworth/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librand.so
LD_PRELOAD=/tmp/librand.so
