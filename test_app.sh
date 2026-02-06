#!/bin/bash
# test_app.sh - Simple tests for Unit Converter CLI App

set -e

APP=./unit_converter

fail() {
  echo "Test failed: $1"
  exit 1
}

# Build the app first
make build

# Test cm-to-inch
result=$(echo "cm-to-inch 10" | $APP)
[[ "$result" == *"10 cm = 3.93701 inches"* ]] || fail "cm-to-inch 10"

# Test inch-to-cm
result=$(echo "inch-to-cm 5" | $APP)
[[ "$result" == *"5 inches = 12.7 cm"* ]] || fail "inch-to-cm 5"

# Test help
result=$(echo "help" | $APP)
[[ "$result" == *"Commands:"* ]] || fail "help command"

# Test unknown command
result=$(echo "foo 1" | $APP)
[[ "$result" == *"Unknown or incomplete command"* ]] || fail "unknown command"

echo "All tests passed!"
