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

# Hands-on-Exercise

## 1: Create a `devcontainer` for the repository

1. Create a `devcontainer` configuration for the repository using the C++ template.
2. Rebuild the Codespace to pick up the new config. Use a full rebuild since the base image has changed.
3. Add the GitLens extension to the devcontainer.
4. Update the `.devcontainer/Dockerfile` to install the `clang-format` package.
5. Rebuild the container to pick up the changes.

## 2: Extend the unit_convert CLI using Copilot

1. Using the Copilot Agent mode, add a new command to the unit converter CLI app.


