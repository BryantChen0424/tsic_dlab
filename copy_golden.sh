find . -mindepth 2 -maxdepth 2 -type d | while read dir; do
    if [ -f "$dir/sim_result/log.txt" ]; then
        cp "$dir/sim_result/log.txt" "$dir/golden/golden_log.txt"
    fi
    if [ -f "$dir/sim_result/wave.vcd" ]; then
        cp "$dir/sim_result/wave.vcd" "$dir/golden/golden_wave.vcd"
    fi
done
