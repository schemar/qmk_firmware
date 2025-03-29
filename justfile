default: help

# List available recipes
help:
  just --list --unsorted

build:
  make keychron/q1_max/ansi_encoder:schemar

flash:
  echo "Hold escape while connecting cable to enter bootloader mode."
  make keychron/q1_max/ansi_encoder:schemar:flash

