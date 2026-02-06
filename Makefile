APP_NAME = unit_converter
SRC = main.cpp

.PHONY: all build run clean test

all: build
test: build
	bash test_app.sh

build:
	g++ $(SRC) -o $(APP_NAME)

clean:
	rm -f $(APP_NAME)

# Usage:
#   make build   # Compile the app
#   make test    # Build and run tests
#   make clean   # Remove the binary
#
# To run the app, use:
#   ./unit_converter cm-to-inch 10
#   ./unit_converter inch-to-cm 5
