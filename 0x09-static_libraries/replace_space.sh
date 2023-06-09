#!/bin/bash

# Check if the directory path is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi

directory="$1"

# Check if the directory exists
if [ ! -d "$directory" ]; then
    echo "Directory not found: $directory"
    exit 1
fi

# Iterate over all .c files in the directory
for file in "$directory"/*.c; do
    # Check if there are .c files in the directory
    if [ "$file" = "$directory/*.c" ]; then
        echo "No .c files found in directory: $directory"
        exit 1
    fi

    # Create a temporary file to store the modified content
    temp_file=$(mktemp)
    if [ $? -ne 0 ]; then
        echo "Failed to create temporary file"
        exit 1
    fi

    # Read the file line by line, replace four spaces with a tab and a space,
    # and write the modified content to the temporary file
    while IFS= read -r line; do
        modified_line="${line//    /	 }"  # Replace four spaces with a tab and a space
        echo "$modified_line" >> "$temp_file"
    done < "$file"

    # Replace the original file with the modified content
    mv "$temp_file" "$file"

    echo "Spaces replaced with tab and space in: $file"
done
