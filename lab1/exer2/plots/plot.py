import pandas as pd
import matplotlib.pyplot as plt

# ----- Function to load a file like your examples -----
def load_cycles_file(filename):
    data = []
    with open(filename) as f:
        for line in f:
            if ':' not in line:
                continue
            label, rest = line.split(":", 1)
            cycles = int(rest.strip().split()[-1])
            data.append((label.strip(), cycles))
    df = pd.DataFrame(data, columns=["label", "numCycles"])
    return df

# ----- Load files -----
df_uf = load_cycles_file("uf_configs.out")      # file with uf2, uf4, ...
df_cache = load_cycles_file("l1d_cache_configs.out")   # file with 2kb, 4kb, ...

# ----- Plot UF variants -----
plt.figure(figsize=(7,4))
plt.plot(df_uf['label'], df_uf['numCycles'], marker='o', color='blue')
plt.xlabel("UF configuration")
plt.ylabel("CPU cycles")
plt.title("CPU cycles for UF variants")
plt.grid(True)
plt.tight_layout()
plt.savefig("uf_plot.svg")
plt.show()

# ----- Plot Cache size variants -----
plt.figure(figsize=(7,4))
plt.plot(df_cache['label'], df_cache['numCycles'], marker='s', color='green')
plt.xlabel("Cache size")
plt.ylabel("CPU cycles")
plt.title("CPU cycles for Cache size variants")
plt.grid(True)
plt.tight_layout()
plt.savefig("l1d_plot.svg")
plt.show()

