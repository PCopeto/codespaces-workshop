# Unit Converter CLI App

## Overview
This is a simple C++ command line application that converts between centimeters and inches. You can easily extend it with new commands.

## Building the app
Build the app using Makefile:

```bash
make build
```
Or directly with g++:
```bash
g++ main.cpp -o app
```

## Running the app
Run the app with a command:

```bash
./app help           # Show help
./app cm-to-inch 10  # Convert 10 cm to inches
./app inch-to-cm 5   # Convert 5 inches to cm
```

## How to Test
Run all tests:
```bash
make test
```
This will build the app and run the test_app.sh script.


