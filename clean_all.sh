find . -mindepth 2 -maxdepth 2 -type d | while read dir; do
    first_level=$(basename "$(dirname "$dir")")
    if [[ $first_level == lab* ]]; then
        echo "Cleaning $dir"
        (cd "$dir" && make clean)
    fi
done