#include <iostream>

class Bicycle
{
public: //Set the following member functions as public
  int getSpeed();
  void setSpeed(int speed); //Public accessor to access private variable speed.
  void pedal();
  void brake();
private: //Set the following
  int speed; //Declare a private variable called 'speed'
};

//Now defining the member functions that were previously declared.

//Getter for the the speed. Takes no parameters & returns an integer.
//The main function does not have acces to the private var speed, but the member functions do...
// (i.e Bicycle::pedal() can directly access speed as it is within the same class.)
int Bicycle::getSpeed()
{
  return speed;
}

//Setter for the speed
void Bicycle::setSpeed(int newSpeed)
{
  if (newSpeed >= 0)
  {
    speed = newSpeed;
  }
}

//Pedal function
//Can access the private speed var as it is a member function within the Bicycle class.
void Bicycle::pedal()
{
  setSpeed(speed + 1);
  std::cout << "\nPedaling; Speed is " << speed << " km/h\n";
}

//Brake function
void Bicycle::brake()
{
  setSpeed(speed - 1);
  std::cout << "\nBraking; Speed is " << speed << " km/h\n";
}

//Main function. Initialize a Bicycle instance called 'Canyon' and call a bunch of member functions on it.
//The main function is NOT a member function within the declared Bicycle class.
int main()
{
  Bicycle canyon;
  canyon.setSpeed(0);
  canyon.pedal();
  canyon.pedal();
  canyon.brake();
  canyon.pedal();
  canyon.brake();
  return 0;
}
