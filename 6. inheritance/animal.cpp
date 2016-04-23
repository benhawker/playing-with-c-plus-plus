#include <iostream>

enum BREED { YORKIE, DANDIE, SHETLAND, DOBERMAN, LABRADOR };

class Mammal
{
public:
  //defines some constructors for the Mammal class
  Mammal(): age(2), weight(5) {}
  //and a destructor

  //Destructors are usually used to deallocate memory and do other cleanup for a
  //class object and its
  //class members when the object is destroyed.
  //A destructor is called for a class object when that object passes out of scope
  //or is explicitly deleted.
  ~Mammal() {}

  //define accessors - enables return of private variable values. Inline declarations.
  int getAge() const { return age; }
  int getWeight() const { return weight; }

  //Setters?
  void setAge(int newAge) { age = newAge; }
  void setWeight(int newWeight) { weight = newWeight; }

  //Other class 'member functions'
  void speak() const { std::cout << "Mammal sound!\n"; }
  void sleep() const { std::cout << "I am sleeping!\n"; }

//Now set some protected variables. Protected variables are available to 'derived' classes.
protected:
  int age;
  int weight;
};


//Declares Dog class derived from Mammal. i.e. it Inherits from Mammal.
class Dog : public Mammal
{
public:
  //defines some constructors
  Dog(): breed(YORKIE) {}
  ~Dog() {}

  //define some accessors
  BREED getBreed() const { return breed; }
  void setBreed(BREED newBreed) { breed = newBreed; }

  //Other member functions/methods
  void wagTail() { std::cout << "Tail wagging!\n"; }
  void askForFood() { std::cout << "Food please!\n"; }

private:
  BREED breed;
};

int main()
{
  //Initialize a new instance of Dog - called fido
  Dog fido;
  //call the inherited function speak on the fido instance of Dog
  fido.speak();
  fido.wagTail();
  //calls inherited accessor - allowing access to the protected variable age.
  std::cout << "Fido is " << fido.getAge() << " years old.\n";
  //int main() must return 0;
  return 0;
}