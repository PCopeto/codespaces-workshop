# Unit Converter CLI App

## Overview
This is a simple C++ command line application that converts between centimeters and inches.

## How to Build
Build the app using Makefile:

```bash
make build
```
Or directly with g++:
```bash
g++ main.cpp -o unit_converter
```

## How to Run
Run the app interactively:

```bash
make run
```
Or directly:
```bash
./unit_converter
```
At the prompt, enter commands like:
- cm-to-inch 10
- inch-to-cm 5
- help
- exit

## How to Test
Run all tests:
```bash
make test
```
This will build the app and run the test_app.sh script.


