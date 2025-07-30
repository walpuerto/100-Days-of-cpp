#include <iostream>

int main()
{
	// Write a short program where the user is asked to enter a single character.
	// Print the value of the character and its ASCII code, using static_cast.
	/*
	Ex:
		Enter a single character: a
		You entered 'a', which has ASCII code 97.
	*/

	std::cout << "Enter a single character: ";
	char c{};
	std::cin.get(c);

	int cValue{ c };
	std::cout << "You entered '" << c << "', which has ASCII code "
		<< cValue << ".\n";

	return 0;
}