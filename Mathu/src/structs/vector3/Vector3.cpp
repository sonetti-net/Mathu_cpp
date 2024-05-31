#include "vector3.h"
#include <stdio.h>
#include <string>
#include <sstream>

namespace Mathu
{

	float Vector3::Magnitude()
	{
		return (x * x) + (y * y) + (z * z);
	}

	float Vector3::Dot(Vector3 other)
	{
		return 0;
	}

	std::string Vector3::ToString()
	{
		std::stringstream ss;

		ss << "(" << x << ", " << y << ", " << z << ")";

		return ss.str();
	}

	Vector3 Vector3::operator-(const Vector3 other)
	{
		Vector3 result(other.x - this->x, other.y - this->y, other.z - this->z);

		return result;
	}
}