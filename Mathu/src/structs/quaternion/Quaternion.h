#pragma once
#include <string>
#include <sstream>
#include <iostream>

namespace Mathu
{
	struct Quaternion
	{
		// imaginary
		float i;
		float j;
		float k;

		// real
		float w;
	};
}