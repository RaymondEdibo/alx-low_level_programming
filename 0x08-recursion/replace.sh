#!/bin/bash

replace_spaces() {
  # Replace 4 spaces with a tab-space in the file
  sed -i 's/    /\t/g' "$1"
}

# Process each specified file
for file in "$@"; do
  if [[ -f "$file" ]]; then
    replace_spaces "$file"
  else
    echo "File not found: $file"
  fi
done

