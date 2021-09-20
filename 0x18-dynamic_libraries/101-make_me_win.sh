#!/bin/bash
wget -P /tmp/ https://github.com/layan2k/alx-low_level_programming/raw/503961d39767f86381d938f576ee22e47ddba750/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
