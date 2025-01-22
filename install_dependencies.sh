#!/bin/bash
sudo apt-get update && sudo apt-get upgrade #Update the system
sudo apt -y install build-essential #gcc compiler
curl --proto '=https' --tlsv1.3 https://sh.rustup.rs -sSf | sh #Rust
 

