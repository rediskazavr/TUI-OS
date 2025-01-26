#!/bin/bash
chmod u+x ./emu/start.sh
sudo rm -r ./emu/loadx.emu
sudo rm -r ./emu/kernelx.emu
make
