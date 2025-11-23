import glob
import os
import matplotlib.pyplot as plt

# Get all files matching the pattern
files = glob.glob("numMemAccesses_*.txt")

data = {}
types = []

for fname in files:
    base = os.path.basename(fname)
    # Extract TYPE from filename: remove prefix and suffix
    type_name = base.replace("numMemAccesses_", "").replace(".txt", "")
    types.append(type_name)

    # Read the single integer from the file
    with open(fname) as f:
        value = int(f.read().strip())
    data[type_name] = value

# Sort types for consistent order
types = sorted(types)
values = [data[t] for t in types]

# Create bar plot
plt.figure(figsize=(10, 6))
plt.bar(types, values, color='skyblue')
plt.ylabel("Memory Accesses")
plt.xlabel("Type")
plt.title("Memory Access Comparison")
plt.xticks(rotation=45, ha='right')
plt.tight_layout()
plt.savefig('memAccesses.svg')
plt.show()
