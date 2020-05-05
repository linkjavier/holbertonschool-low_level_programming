#!/bin/bash
wget https://github.com/linkjavier/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/irand.so -P ~
export LD_PRELOAD=~/irand.so
