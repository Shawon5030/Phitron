import cv2
import numpy as np

# Image read as grayscale
img = cv2.imread(r'C:\Users\SHAWON\Downloads\cat.png')

# Make a copy to edit
modified_img = img.copy()

# যেসব pixel value = 0, সেগুলোকে 255 করে দাও
modified_img[modified_img >245 ] = 0
# Show the result
cv2.imshow("Modified Image", modified_img)
cv2.waitKey(0)
cv2.destroyAllWindows()
