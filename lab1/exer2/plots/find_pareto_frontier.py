import re
import pandas as pd
from paretoset import paretoset

def parse_line(line):
    # Clean CAT -A end-of-line $
    line = line.rstrip("$\n")

    # Split on the FIRST colon
    parts = line.split(":", 1)
    if len(parts) != 2:
        raise ValueError(f"Bad line (missing colon): {line}")

    config_str = parts[0]
    cycles_str = parts[1].strip()  # removes tabs and spaces
    cycles = int(cycles_str)

    # Extract cache sizes robustly
    def get_cache(name):
        m = re.search(rf"{name}_(\d+kB)", config_str)
        if not m:
            raise ValueError(f"Could not parse {name} in: {config_str}")
        return m.group(1)

    l1i = get_cache("l1i")
    l1d = get_cache("l1d")
    l2  = get_cache("l2")

    # Convert cache sizes to bytes
    def parse_kB(s):
        return int(s[:-2])   # strip "kB"

    total_mem = parse_kB(l1i) + parse_kB(l1d) + parse_kB(l2)

    return {
        "config": config_str,
        "l1i": parse_kB(l1i),
        "l1d": parse_kB(l1d),
        "l2": parse_kB(l2),
        "total_memory": total_mem,
        "cycles": cycles,
    }

# ----- Load file -----
rows = []
with open("total_stats.out") as f:
    for line in f:
        if line.strip():
            rows.append(parse_line(line))

df = pd.DataFrame(rows)

# ----- Pareto -----
is_pareto = paretoset(df[["cycles", "total_memory"]], sense=("min", "min"))
pareto_df = df[is_pareto]

print(pareto_df)
