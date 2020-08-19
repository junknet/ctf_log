# pip install pillow
from PIL import Image

import os

gifFileName = './4b0799f9a4d649f09a882b6b1130bb70.gif'
im = Image.open(gifFileName)


while True:
    current = im.tell()
    im.save(str(current)+'.png')
    im.seek(current+1)
