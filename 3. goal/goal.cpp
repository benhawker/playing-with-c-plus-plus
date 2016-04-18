#include <iostream>

int main()
{
	//initialize array with 4 elements (all floats)
	float goal[4];
	goal[0] = 0.8;
	goal[1] = 0.6;
	goal[2] = 0.4;
	goal[3] = 0.2;
	//Define 2 variables as floats
	float current, target;

	//Get use input. Save input into variable
	std::cout << "Enter current weight: ";
	std::cin >> current;

	std::cout << "Enter your targeted weight: ";
	std::cin >> target;

	//For loop.
	for (int i = 0; i < 4; i++)
	{
		float loss = (current - target) * goal[i];
		std::cout << "Goal " << i << ": ";
		std::cout << current - loss << "\n";
	}

	//Function must return int. main function returns 0;
	return 0;
}