import os
import glob
import matplotlib.pyplot as plt

files = glob.glob("*_CL_*_PK.txt")  # matches your files

data = {}

for fname in files:
    base = os.path.basename(fname)
    name = base[:-4]  # strip ".txt"
    parts = name.split("_")

    cl_idx = parts.index("CL")

    client = "_".join(parts[: cl_idx + 1])
    packet = "_".join(parts[cl_idx + 1 :])

    with open(fname) as f:
            value = int(f.read().strip())

    data[(client, packet)] = value

clients = sorted(set(c for c, _ in data.keys()))
packets = sorted(set(p for _, p in data.keys()))

fig, ax = plt.subplots(figsize=(10, 6))

bar_width = 0.2
x = list(range(len(clients)))

# widen plot if many packet types
total_width = bar_width * len(packets)
offsets = [(i - (len(packets) - 1) / 2) * bar_width for i in range(len(packets))]

for i, packet in enumerate(packets):
    values = [data.get((client, packet), 0) for client in clients]
    ax.bar([xi + offsets[i] for xi in x], values, width=bar_width, label=packet)

ax.set_xticks(x)
ax.set_xticklabels(clients, rotation=25, ha="right")
ax.set_ylabel("Memory Accesses")
ax.set_title("Memory Access Comparison (ClientList × PacketList)")
ax.legend(title="Packet Type", bbox_to_anchor=(1.05, 1), loc="upper left")

plt.tight_layout()
plt.savefig("memAccesses.svg")
plt.show()

