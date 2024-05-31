#pragma once
#include <string>
#include <sstream>
#include <iostream>

namespace Mathu
{
	struct Vector3
	{
		float x;
		float y;
		float z;

		float Magnitude();
		float Dot(Vector3 other);

		std::string ToString();

		//	Methods
		Vector3 operator-(const Vector3 right);

		// Constructors

		Vector3()
		{
			this->x = 0.0f;
			this->y = 0.0f;
			this->z = 0.0f;
		};

		Vector3(float x, float y, float z)
		{
			this->x = x;
			this->y = y;
			this->z = z;

			std::cout << "constructed" << std::endl;
		};

		~Vector3() {} // Destructor
	};
}