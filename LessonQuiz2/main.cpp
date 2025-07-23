#include "io.h"

int main()
{
	//Read an integer(readNumber)
	int x{ readNumber() };

	//Read another integer(readNumber)
	int y{ readNumber() };

	////Add the integers
	//int z{ x + y };
	
	//output the integer(write answer)
	writeAnswer(x + y);

	return 0;
}