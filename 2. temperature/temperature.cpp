#include <iostream>

//Define prototype of convert function
float convert(float);

//Define main function
int main()
{
	//Define local variables
	float fahrenheit;
	float celsius;

	std::cout << "Enter the temperature in fahrenheit: ";
	std::cin >> fahrenheit;

	//Set celsius equal to the return of the convert function with fabrenheit arg.
	celsius = convert(fahrenheit);
	std::cout << "The temperature in celsius is: ";
	std::cout << celsius << "\n";

	//Function must return an int.
	return 0;
}

//Define's function to convert
float convert(float fahrenheit)
{
	//Define variable celsius as a float
	float celsius;

	//Assign result of the calculation to the celsius var
	celsius = ((fahrenheit - 32) * 5) / 9;

	//return the value of celsius. A float.
	return celsius;
}
