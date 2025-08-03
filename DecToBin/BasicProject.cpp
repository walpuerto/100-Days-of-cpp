#include <bitset>
#include <iostream>

void decToBin(int z)
{
	if (z >= 256)
	{
		std::cout << "1";
		z -= 256;
	}
	else std::cout << "0";

	if (z >= 128)
	{
		std::cout << "1";
		z -= 128;
	}
	else std::cout << "0";

	if (z >= 64)
	{
		std::cout << "1";
		z -= 64;
	}
	else std::cout << "0";

	if (z >= 32)
	{
		std::cout << "1";
		z -= 32;
	}
	else std::cout << "0";

	if (z >= 16)
	{
		std::cout << "1";
		z -= 16;
	}
	else std::cout << "0";

	if (z >= 8)
	{
		std::cout << "1";
		z -= 8;
	}
	else std::cout << "0";

	if (z >= 4)
	{
		std::cout << "1";
		z -= 4;
	}
	else std::cout << "0";
	
	if (z >= 2)
	{
		std::cout << "1";
		z -= 2;
	}
	else std::cout << "0";

	if (z > 0)
	{
		std::cout << "1";
		z -= 0;
	}
	else std::cout << "0";
}


int main()
{
	std::cout << "Enter an integer from 1 to 255: ";
	int userInput{};
	std::cin >> userInput;
	decToBin(userInput);
	return 0;
}