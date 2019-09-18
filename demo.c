#include <cstdio>
#include <iostream>

// fix incomplete variable building error
#include <fstream>
#include <vector>
#include "vec3.h"

int savePPM(uint32_t width, uint32_t height, std::vector<float>& color)
{
	std::ofstream ofs("./out.ppm", std::ios::out | std::ios::binary);
	ofs << "P6\n" << width << " " << height << "\n255\n";
	for (uint32_t i = 0; i < width * height; i++)
	{
			ofs << (unsigned char)(color[0] * 255)
				<< (unsigned char)(color[1] * 255)
				<< (unsigned char)(color[2] * 255);
	}
	ofs.close();

	return 0;
}

int main()
{
	uint32_t width = 200, height = 200;
	std::vector<float> color(3);
	color[0] = 0.0;
	color[1] = 0.0;
	color[2] = 0.5;

	savePPM(width, height, color);

	vec3f a(0.3, 0.4, 0.5);
	vec3f b(0.5, 0.4, 0.3);
	vec3f c = a + b;

	std::cout << "vec3 +:\n";
	std::cout << "c.mX:" << c.mX << ", c.mY:" << c.mY << ", c.mZ:" << c.mZ << "\n";

	c = a - b;
	std::cout << "vec3 -:\n";
	std::cout << "c.mX:" << c.mX << ", c.mY:" << c.mY << ", c.mZ:" << c.mZ << "\n";

	c = a * b;
	std::cout << "vec3 *:\n";
	std::cout << "c.mX:" << c.mX << ", c.mY:" << c.mY << ", c.mZ:" << c.mZ << "\n";

	float dotValue = a.dot(b);
	std::cout << "vec3 dot product:\n";
	std::cout << "dot value:" << dotValue << "\n";

	c = a.crossProduct(b);
	std::cout << "vec3 cross product:\n";
	std::cout << "c.mX:" << c.mX << ", c.mY:" << c.mY << ", c.mZ:" << c.mZ << "\n";

	float len = a.length();
	std::cout << "vec3 length:\n";
	std::cout << "length:" << len << "\n";

	return 0;
}
