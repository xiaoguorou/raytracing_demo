#include <cstdio>
#include <iostream>

// fix incomplete variable building error
#include <fstream>
int main()
{
	uint32_t width = 200, height = 200;
	float color = 1.0;

	std::ofstream ofs("./out.ppm", std::ios::out | std::ios::binary);
	ofs << "P6\n" << width << " " << height << "\n255\n";
	for (uint32_t i = 0; i < width * height; i++)
	{
			ofs << (unsigned char)(1.0 * 255)
				<< (unsigned char)(0.0 * 255)
				<< (unsigned char)(0.0 * 255);
	}
	ofs.close();

	return 0;
}
