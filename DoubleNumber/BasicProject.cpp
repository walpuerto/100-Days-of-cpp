#include <iostream>

int doubleNumber(int n)
{
	return 2* n;
}

int main()
{
	std::cout << "Enter an integer: ";

	int x{};
	std::cin >> x;

	std::cout << doubleNumber(x) << std::endl;
	return 0;
}