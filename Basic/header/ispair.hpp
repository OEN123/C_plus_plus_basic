#pragma once

#include<iostream>
#include<math.h>

namespace ip
{
	namespace numberINT
	{
		void isPair(int inputNumber)
		{
			if (inputNumber % 2 == 0)
			{
				std::cout << "Is pair.\n";
			}
			else
			{
				std::cout << "Is unpair.\n";
			}
		}
	}

	namespace numberFLOAT
	{
		void isPair(float inputNumber)
		{
			if (fmodf(inputNumber, 2.0) == 0.0f)
			{
				std::cout << "Is pair.\n";
			}
			else
			{
				std::cout << "Is unpair.\n";
			}
		}
	}
}
