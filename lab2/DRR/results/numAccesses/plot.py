import os
import glob
import matplotlib.pyplot as plt

files = glob.glob("numMemAccesses_*_CL_*_PK.txt")

data = {}

for fname in files:
    base = os.path.basename(fname)
    name = base.replace("numMemAccesses_", "").replace(".txt", "")
    parts = name.split("_")  # e.g. ["SLL", "CL", "DLL", "PK"]

    # reconstruct client and packet tokens
    client = parts[0] + "_" + parts[1]   # SLL_CL
    packet = parts[2] + "_" + parts[3]   # DLL_PK

    with open(fname) as f:
        value = int(f.read().strip())

    data[(client, packet)] = value

clients = sorted(set(c for c, _ in data.keys()))
packets = sorted(set(p for _, p in data.keys()))

fig, ax = plt.subplots(figsize=(10, 6))

bar_width = 0.25
x = range(len(clients))

for i, packet in enumerate(packets):
    values = [data[(client, packet)] for client in clients]
    ax.bar([v + i * bar_width for v in x], values, width=bar_width, label=packet)

ax.set_xticks([v + bar_width for v in x])
ax.set_xticklabels(clients)

ax.set_ylabel("Memory Accesses")
ax.set_title("Memory Access Comparison (ClientList x PacketList)")
ax.legend(title="Packet Type")

plt.tight_layout()
plt.savefig('memAccesses.svg')
plt.show()

