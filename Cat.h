#pragma once
#include "Dog.h"


class Cat : public Animal
{

public:
	void const Speak()
	{
		std::cout << GetName() << " has woofed \n";
	}

	virtual void Move() const
	{
		std::cout << GetName() << " has pounced! \n";
	}

private:

};