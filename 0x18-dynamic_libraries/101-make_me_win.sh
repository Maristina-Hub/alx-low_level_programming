#!/bin/bash
wget -P .. https://github.com/Maristina-Hub/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
