#include <iostream>

double getDouble()
{
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;
	return x;
}

char getOperator()
{
	std::cout << "Enter +, -, *, or /: ";
	char op{};
	std::cin >> op;
	return op;
}

void calculate(double x, double y, char op)
{
	double calculation{};
	if (op == '+')
		calculation = x + y;
	else if (op == '-')
		calculation = x - y;
	else if (op == '*')
		calculation = x * y;
	else if (op == '/')
		calculation = x / y;
	else return;
	std::cout << x << " " << op << " " << y << " is " << calculation << "\n";
}


int main()
{
	// ask for two doubles
	double x{ getDouble() };
	double y{ getDouble() };

	// ask for an operation
	char operation{ getOperator() };

	// output the result
	calculate(x, y, operation);

	return 0;
}