default: help

# List available recipes
help:
    just --list --unsorted

build:
    make keychron/q1_max/ansi_encoder:schemar

flash:
    echo "Hold escape while connecting cable to enter bootloader mode."
    make keychron/q1_max/ansi_encoder:schemar:flash

nix-shell:
    # It's not perfect, but it works.
    # Manually listed the requirements from requirements.txt here:
    nix-shell -p qmk python3Packages.{appdirs,argcomplete,colorama,dotty-dict,hid,hjson,jsonschema,milc,pygments,pyserial,pyusb,pillow}
