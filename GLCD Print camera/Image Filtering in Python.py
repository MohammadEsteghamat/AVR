from PIL import Image
import numpy as np

# Load the image
image = Image.open('11.png')

# Convert the image to grayscale
bw_image = image.convert('L')

# Convert the image to a NumPy array
image_array = np.array(bw_image)

# Remove even rows and even columns
filtered_array = image_array[1::2, 1::2]

# Convert the filtered array back to an image
filtered_image = Image.fromarray(filtered_array)

# Save the new filtered image
filtered_image.save('filtered_bw_image.png')
