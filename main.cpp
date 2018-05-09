#include <iostream>
#include <stdio.h>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBI_MSC_SECURE_CRT
#include <stb_image_write.h>



int main(int argc, char *argv[]) {
	
	int width = 1024;
	int height = 728;
	const char* filename = "A.png";
	int size = width * height * 4;
	
	char* img =(char*)malloc(size);
	if (img == NULL) {

		std::cout << "FAILED" << std::endl;
		return 0;

	}

	stbi_write_png(filename,width,height,4,img,width*4);

	free(img);

	return 0;
}