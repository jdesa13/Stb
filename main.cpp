#include <iostream>
#include <stdio.h>
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image.h>
#include <stb_image_write.h>

#define BITMAPRANGE 255

int main(int argc, char *argv[]) {

	std::string filename = "A.png";
	
	unsigned int mWidth = 1024;
	unsigned int mHeight = 728;
	unsigned int size = mWidth * mHeight * 4;
	
	//char* img =(char*)malloc(size); //JTK

	//Scale and cast for bitmap color range.
	uint8_t *pixels = new uint8_t[size];



	if (pixels == NULL) {
		std::cout << "FAILED: Falled to allocate memory for Image!" << std::endl;
		return 0;
	}


	unsigned int index = 0;
	for (int rows =0; rows<mHeight; rows++)
		for (int cols = 0; cols < mWidth; cols++)
		{
			index = rows*mWidth * 4 + cols * 4;
			pixels[index + 0] = BITMAPRANGE * 0; //Red
			pixels[index + 1] = BITMAPRANGE * 1; //Green
			pixels[index + 2] = BITMAPRANGE * 0; //Blue
			pixels[index + 3] = BITMAPRANGE * 1; // Alpha
		}




	stbi_write_png(filename.c_str(), mWidth, mHeight, 4, pixels, mWidth*4);

	free(pixels);

	return 0;
}