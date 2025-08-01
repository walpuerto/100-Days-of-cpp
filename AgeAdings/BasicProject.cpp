#include <iostream>
#include <string>
#include <string_view>

std::string getName(int personNumber)
{
	std::cout << "Enter the name of person #" << personNumber << ": ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	return name;
}

int getAge(std::string_view name)
{
	std::cout << "Enter the age of " << name << ": ";
	int age{};
	std::cin >> age;
	return age;
}

void printOldestAge(int age1, int age2, std::string_view name1, std::string_view name2)
{
	int olderAge{};
	int youngerAge{};

	std::string_view olderPersonName{};
	std::string_view youngerPersonName{};

	if (age1 > age2) {
		olderAge = age1;
		youngerAge = age2;

		olderPersonName = name1;
		youngerPersonName = name2;
	}
	else {
		youngerAge = age1;
		olderAge = age2;

		youngerPersonName = name1;
		olderPersonName = name2;
	}

	std::cout << olderPersonName << " (age " << olderAge
		<< ") is older than " << youngerPersonName
		<< " (age " << youngerAge << ").\n";

}

int main()
{
	constexpr int personNumber1 = 1;
	std::string name1{ getName(personNumber1) };
	int age1{ getAge(name1) };

	constexpr int personNumber2 = 2;
	std::string name2{ getName(personNumber2) };
	int age2{ getAge(name2) };

	printOldestAge(age1, age2, name1, name2);
	
	return 0;
}