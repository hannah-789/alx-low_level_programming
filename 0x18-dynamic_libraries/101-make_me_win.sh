#!/bin/bash
wget -P /tmp https://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@github.com/hannah-789/alx-low_level_programming.git/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
