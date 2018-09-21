#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>

unsigned int loadTexture(const char* path)
{
	int width, height, nrChannels;
	stbi_load(path, &width, &height, &nrChannels, 0);
	return 1;
}