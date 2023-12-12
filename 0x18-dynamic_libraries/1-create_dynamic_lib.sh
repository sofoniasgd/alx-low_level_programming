#!/bin/bash
gcc c-file/*.c -c -fPIC
gcc *.o -shared -o libdynamic.so
