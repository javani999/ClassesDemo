#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog() { }

	Dog(std::string name, int age) : Animal(name, age) { }

	virtual ~Dog() { }

	void const Speak()
	{

		std::cout << GetName() << " has woofed \n";
	}

	virtual void Move() const
	{
		std::cout << GetName() << " has attacked! \n";
	}
};

