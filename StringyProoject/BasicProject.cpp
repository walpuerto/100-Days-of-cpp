#include <string>
#include <iostream>

std::string getFullName()
{
	std::cout << "Enter your full name: ";
	std::string fullName{};
	std::getline(std::cin >> std::ws, fullName);
	return fullName;
}

int getAge()
{
	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;
	return age;
}

int main()
{
	std::string fullName{ getFullName() };
	int age{ getAge() };
	std::cout << "Your age + length of name = " << ssize(fullName) + age << "\n";
	return 0;
}