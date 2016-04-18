#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 100; i++) 
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			puts ("FizzBuzz");
		}
		if (i % 3 == 0)
		{
			puts ("Fizz");
		}
		if (i % 5 == 0)
		{
			puts ("Buzz");
		}
		else
		{
			printf ("%i\n", i);
		}
	}
}


