#include <iostream>

bool isPrime(int x) 
{
	return x == 2 || x == 3 || x == 5 || x == 7;
}


int main()
{
	std::cout << "Enter an number from 0-9: ";
	int x { };
	std::cin >> x;

	// if prime say The digit is prime
	if (isPrime(x)) std::cout << "The digit is prime";
	// otherwise The digit is not prime
	else std::cout << "The digit is not prime";

	return 0;
}