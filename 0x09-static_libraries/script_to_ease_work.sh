#!/bin/bash

# Set the source and destination directories
src_dir="/root/alx-low_level_programming"
dest_dir="/root/alx-low_level_programming/0x09-static_libraries"

# Create an array of the file names to search for
files=("putchar"  "islower"  "isalpha"  "abs""isupper"  "isdigit"  "strlen" "puts" "strcpy" "atoi" "strcat" "strncat" "strncpy" "strcmp" "memset" "memcpy" "strchr" "strspn" "strpbrk" "strstr")

# Loop through the array of file names
for file in "${files[@]}"; do
    # Use the find command to search for the .c files in the source directory
    find "$src_dir" -type f -name "*-$file.c" -exec cp {} "$dest_dir" \;
done
