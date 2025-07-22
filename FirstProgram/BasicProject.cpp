#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}

int main()
{
	int num{ getValueFromUser() };

	std::cout << "Double " << num << " is: " << num * 2 << '\n';
	std::cout << "Triple " << num << " is: " << num * 3 << '\n';
	
	return 0;
}