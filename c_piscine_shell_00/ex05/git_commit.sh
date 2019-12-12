#!/bin/bash

# Print the 5 more recent IDs on git log
# Format options can be find on "PRETTY FORMATS" section on git-log documentation

git log --format=%H | head -n 5
