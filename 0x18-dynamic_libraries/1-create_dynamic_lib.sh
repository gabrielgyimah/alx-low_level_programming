#!/bin/bash
sudo gcc -c *.c -fpic
sudo gcc *.o -shared -o liball.so
