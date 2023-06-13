#!/bin/bash

# Check if file argument is provided
if [ $# -eq 0 ]; then
    echo "Usage: ./replace_spaces_with_tabs.sh <file>"
    exit 1
fi

# Create a temporary file
temp_file=$(mktemp)

# Read file line by line and modify code
while IFS= read -r line; do
    # Count the number of consecutive spaces at the beginning of the line
    spaces=$(expr "$line" : '^ *')

    # Calculate the number of tab spaces to replace with
    tabs=$((spaces / 4))

    # Replace spaces with tab spaces
    if [ "$tabs" -gt 0 ]; then
        tabs_spaces=$(printf '\t%.0s' $(seq 1 "$tabs"))
        line="${tabs_spaces}${line:$spaces}"
    fi

    # Append modified line to the temporary file
    echo "$line" >> "$temp_file"
done < "$1"

# Overwrite the original file with the contents of the temporary file
mv "$temp_file" "$1"
