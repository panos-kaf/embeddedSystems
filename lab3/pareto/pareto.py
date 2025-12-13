import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

df = pd.read_csv('hls_design_space.csv')

df['Min Latency (Cycles)'] = pd.to_numeric(df['Min Latency (Cycles)'], errors='coerce')

# Sort data by Min Latency (Cycles) in descending order for Pareto principle visualization
df_sorted = df.sort_values(by='Min Latency (Cycles)', ascending=False).reset_index(drop=True)

# Calculate Cumulative Usage
df_sorted['Cumulative Sum'] = df_sorted['Min Latency (Cycles)'].cumsum()
df_sorted['Cumulative Percentage'] = (df_sorted['Cumulative Sum'] / df_sorted['Min Latency (Cycles)'].sum()) * 100

# --- Plotting ---
fig, ax1 = plt.subplots(figsize=(12, 6))
fig.suptitle('Pareto Plot: HLS Configurations by Minimum Latency (Cycles)', fontsize=14, y=1.02)

# Plot Min Latency
color = 'tab:blue'
ax1.set_xlabel('HLS Configuration (Sorted by Latency, Worst to Best)', fontsize=10)
ax1.set_ylabel('Minimum Latency (Clock Cycles)', color=color)
bars = ax1.bar(df_sorted['Configuration'], df_sorted['Min Latency (Cycles)'], color=color)
ax1.tick_params(axis='y', labelcolor=color)
ax1.set_ylim(0, df_sorted['Min Latency (Cycles)'].max() * 1.1)
ax1.set_xticklabels(df_sorted['Configuration'], rotation=45, ha="right", fontsize=8)

# Add values above the bars
for bar in bars:
    yval = bar.get_height()
    ax1.text(bar.get_x() + bar.get_width()/2, yval + (df_sorted['Min Latency (Cycles)'].max() * 0.01),
             int(yval), ha='center', va='bottom', fontsize=7)

# Plot Usage Percentage
ax2 = ax1.twinx()  # Instantiate a second axes that shares the same x-axis
color = 'tab:red'
ax2.set_ylabel('Cumulative Usage Percentage (%)', color=color)
ax2.plot(df_sorted['Configuration'], df_sorted['Cumulative Percentage'], color=color, marker='D', linestyle='-', linewidth=2)
ax2.tick_params(axis='y', labelcolor=color)
ax2.set_ylim(0, 105)

# Add cumulative percentage labels (e.g., at the 80% mark)
ax2.hlines(80, -0.5, len(df_sorted['Configuration']) - 0.5, color='gray', linestyle='--', linewidth=1)
for i, percentage in enumerate(df_sorted['Cumulative Percentage']):
    if percentage > 10 and percentage < 100: # Avoid placing text in cramped space or outside the bars
        ax2.text(i, percentage + 2, f'{percentage:.1f}%', ha='center', va='bottom', color=color, fontsize=8)

fig.tight_layout(rect=[0, 0.03, 1, 0.95])
plt.grid(False)
ax2.grid(True, linestyle=':', alpha=0.5)

plt.savefig('pareto_plot.svg')
