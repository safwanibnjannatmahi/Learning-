import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Message to display
message = "Hello, World!"

# Setup the figure
fig, ax = plt.subplots()
ax.set_xlim(0, 1)
ax.set_ylim(0, 1)
ax.axis('off')  # Hide axes

# Text object that will be updated
text = ax.text(0.5, 0.5, '', fontsize=24, ha='center', va='center')

# Animation update function
def update(frame):
    text.set_text(message[:frame])
    return text,

# Create the animation
ani = animation.FuncAnimation(
    fig, update, frames=len(message)+1, interval=300, blit=True, repeat=False
)

# Save to a video file
ani.save('hello_world_animation.mp4', writer='ffmpeg')

# Show animation in a window (optional)
# plt.show()
