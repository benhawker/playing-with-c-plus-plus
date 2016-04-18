#include <iostream>

int main()
{
  string output = ''

  for (int i = 0; i < 100; i++)
  {
    if (i % 3)
    {
      output << "Fizz";
      return 0;
    }

    if (i % 5)
    {
      output << "Buzz";
      return 0;
    }

    if (i % 3) && (i % 5)
    {
      output << "FizzBuzz";
      return 0;
    }
    else
    {
      output << i;
    }
  }
  std::cout << output;
  return 0;

}
