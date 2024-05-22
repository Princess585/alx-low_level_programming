#!/bib/bash

# Convert Dos line ending to Unix (LF)
dos2unix *.c

# Remove trailing whitespaces
sed -i 's/[[:space:]]\+$//' *.c
