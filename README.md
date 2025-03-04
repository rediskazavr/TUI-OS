<img src="https://github.com/rediskazavr/TUI-OS/blob/main/icon.jpg" width="150">

[![GitHub Stars](https://img.shields.io/github/stars/rediskazavr/TUI-OS.svg?style=social&label=Star)](https://github.com/rediskazavr/TUI-OS)
[![GitHub Forks](https://img.shields.io/github/forks/rediskazavr/TUI-OS.svg?style=social&label=Fork)](https://github.com/rediskazavr/TUI-OS)
[![GitHub Issues](https://img.shields.io/github/issues/rediskazavr/TUI-OS.svg)](https://github.com/rediskazavr/TUI-OS/issues)
[![License](https://img.shields.io/github/license/rediskazavr/TUI-OS.svg)](https://github.com/rediskazavr/TUI-OS/blob/master/LICENSE)

# TUI-OS
TUI-OS - Operating system emulator in Linux terminal. Pet-Project made on the basis of WSL linux idea

## Content
* [Technologies](#Technologies)
* [Quick Start](#Quick-Start-(Debian-like-system-only))
* [Docs](#Docs)
* [FAQ](#FAQ)
* [To do](#To-do)
* [Team project](#Team-project)
* [Preview](#Preview)
* [Sources](#Sources)

## 💽 Technologies
[![Technologies](https://skillicons.dev/icons?i=bash,c,rust,git,github,linux,ubuntu,md,ass=&theme=dark)](https://skillicons.dev)

## 📎 Quick Start (Debian-like system only)
🚧 In development!!!
> Before installing/building the project, make sure you have: gcc, rustc, make installed
```
git clone https://github.com/rediskazavr/TUI-OS 
cd TUI-OS
chmod u+x build.sh 
./build.sh 
cd emu 
chmod u+x start.sh 
./start.sh
```

## 📃 Docs
Code documentation:
* 🇬🇧EN: [Code Documentation](https://github.com/rediskazavr/TUI-OS/wiki/EN%E2%80%90CODE%E2%80%90DOCUMENTATION)
* 🇷🇺RU: [Code Documentation](https://github.com/rediskazavr/TUI-OS/wiki/RU%E2%80%90CODE%E2%80%90DOCUMENTATION)

Manual for working with the emulator:
* 🇬🇧EN: [Manual for working with the emulator](https://github.com/rediskazavr/TUI-OS/wiki/EN%E2%80%90MANUAL%E2%80%90FOR%E2%80%90WORKING%E2%80%90WITH%E2%80%90THE%E2%80%90EMULATOR)
* 🇷🇺RU: [Manual for working with the emulator](https://github.com/rediskazavr/TUI-OS/wiki/RU%E2%80%90MANUAL%E2%80%90FOR%E2%80%90WORKING%E2%80%90WITH%E2%80%90THE%E2%80%90EMULATOR)

System work plan:
* 🇬🇧EN: [System Work Plan](https://github.com/rediskazavr/TUI-OS/blob/main/docs/SysWorkPlan_en.md)
* 🇷🇺RU: [System Work Plan](https://github.com/rediskazavr/TUI-OS/blob/main/docs/SysWorkPlan_ru.md)

## ❓ FAQ
Before asking a question, try to find the answer here:
* 🇬🇧EN: [FAQ](https://github.com/rediskazavr/TUI-OS/blob/main/docs/FAQ_en.md)
* 🇷🇺RU: [FAQ](https://github.com/rediskazavr/TUI-OS/blob/main/docs/FAQ_ru.md)

## 📝 To do 
- [x] Creating a directory tree
- [x] Creating an emulator bootloader (loadx)
- [ ] Creating a Graphic Engine (grphx)
- [x] Creating a kernel (kernelx)
- [x] Creating a software package for the emulator (pkgx)
- [ ] Write all the documentation
- [ ] Porting to all possible Linux distributions

## 📜 Team project
* Project Lead: [rediskazavr](https://github.com/rediskazavr)

## 📷 Preview
<img src="https://github.com/rediskazavr/TUI-OS/blob/main/docs/img/preview_for_readme.jpg" width=512>
<img src="https://github.com/rediskazavr/TUI-OS/blob/main/docs/img/preview_for_readme2.jpg" width=512>

## 📌 Sources
> The project carries a pet-project that I would like to make public. The idea was taken with the creation of its own OS, similar to WSL Linux using the programming languages C, RUST and the [Rataui library](https://github.com/ratatui/ratatui) for TUI (Terminal User Interface)
