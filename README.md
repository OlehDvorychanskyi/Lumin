# Lumin ![License](https://img.shields.io/github/license/OlehDvorychanskyi/Lumin.svg)

## Table of Contents  
- [Introduction](#introduction) 
- [Getting Started](#getting-started)
- [Used Technologies](#used-technologies)

## Introduction
Lumin is an early-stage game engine mainly created for learning purposes. Unfortunately, not much has been implemented at this time, but you still can use it as a helpful tool to create games using SFML.

## Getting Started

**1. Downloading the repository:**

Clone the repository to your local machine using Git:
   ```bash
   git clone https://github.com/OlehDvorychanskyi/Lumin.git 
   ```
   
**2. Building and Running with CMake:**

Make sure you are in the Lumin root directory then you can build using CMake.

For a release build, enter the following command:
```bash
cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
```

For a debug build, use the following command:
```bash
cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
```

After configuring CMake, build the project using the following command:
```bash
cmake --build build
```

## Used Technologies
- C++
- SFML