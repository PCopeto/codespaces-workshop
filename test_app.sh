#!/bin/bash
# test_app.sh - Simple tests for Unit Converter CLI App

set -e

APP=./app

fail() {
  echo "Test failed: $1"
  exit 1
}

# Build the app first
make build

# Test cm-to-inch
result=$($APP cm-to-inch 10)
[[ "$result" == *"10 cm = 3.93701 inches"* ]] || fail "cm-to-inch 10"

# Test inch-to-cm
result=$($APP inch-to-cm 5)
[[ "$result" == *"5 inches = 12.7 cm"* ]] || fail "inch-to-cm 5"

# Test help
result=$($APP help)
[[ "$result" == *"Unit Converter CLI App"* ]] || fail "help command"

# Test unknown command
result=$($APP foo 1)
[[ "$result" == *"Unknown or incomplete command"* ]] || fail "unknown command"

echo "All tests passed!"
