APP_NAME = unit_converter
SRC = main.cpp

.PHONY: all build run clean test

all: build
test: build
	bash test_app.sh

build:
	g++ $(SRC) -o $(APP_NAME)

run: build
	./$(APP_NAME)

clean:
	rm -f $(APP_NAME)

# Usage:
#   make build   # Compile the app
#   make run     # Build and run interactively (enter commands at the prompt)
#   make test    # Build and run tests
#   make clean   # Remove the binary
#
# To run the app interactively:
#   make run
#
# At the prompt, enter commands like:
#   cm-to-inch 10
#   inch-to-cm 5
#   help
#   exit
