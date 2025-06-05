#!/bin/bash

# This script checks for the presence of a C++ compiler (g++) and installs it if not found.
# It supports macOS, Debian-based, and Red Hat-based Linux distributions.

# Check if g++ is already installed
if command -v g++ >/dev/null 2>&1; then
    echo "C++ compiler (g++) is already installed."
else
    echo "C++ compiler (g++) not found. Installing..."

    if [[ "$OSTYPE" == "darwin"* ]]; then
        # macOS
        if command -v brew >/dev/null 2>&1; then
            brew install gcc
        else
            echo "Homebrew not found. Please install Homebrew first: https://brew.sh/"
            exit 1
        fi
    elif [[ -f /etc/debian_version ]]; then
        sudo apt-get update
        sudo apt-get install -y g++
    elif [[ -f /etc/redhat-release ]]; then
        sudo yum install -y gcc-c++
    else
        echo "Unsupported OS. Please install g++ manually."
        exit 1
    fi

    echo "C++ compiler installation complete."
fi