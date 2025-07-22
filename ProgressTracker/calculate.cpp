#include "calculate.h"
#include <iostream>

void sillyCalculation()
{
	int totalSubChaps{ 13 /*Chapter 0*/ + 10 /*Chapter 1*/ + 6 /*Day 8*/ };

	int multiplier{ 1 };
	std::cin >> multiplier;
	std::cout << "Total chapters: " << totalSubChaps * multiplier << ".\n";
}