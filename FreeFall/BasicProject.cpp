#include <iostream>

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double x{};
	std::cin >> x;
	return x;
}

void showRemainingDistance(double seconds, double towerHeight)
{
	double distanceFallen{ 9.8 * seconds * seconds * 0.5 };
	double remainingDistance{ towerHeight - distanceFallen };
	if (remainingDistance > 0)
		std::cout << "At " << seconds << " seconds, the ball is at height: "
		<< remainingDistance << " meters.\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main()
{
	// Ask the user for tower height -> meters, assume double
	double towerHeight{ getTowerHeight() };

	// Calculate distance fallen from time (1s to 5s)
	// getDistanceFallen( seconds ) 5 times <- convert int to double for seconds
	showRemainingDistance(1, towerHeight);
	showRemainingDistance(2, towerHeight);
	showRemainingDistance(3, towerHeight);
	showRemainingDistance(4, towerHeight);
	showRemainingDistance(5, towerHeight);

	return 0;
}