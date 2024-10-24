#pragma once

#include <iostream>
#include <vector>

#include "Animal.h"

class Person
{

private:

	std::string m_name;
	int m_age = 0;

	Animal* m_pPet = nullptr;

public:

	// constructor
	Person() { } // default

	Person(const std::string name, const int age)
	{
		SetName(name);
		SetAge(age);
	}

	// destructor
	~Person()
	{
		std::cout << GetName() << " being destroyed!!!!!!!\n";
	}


	// mutator methods (setters)
	void SetName(const std::string name) { m_name = name; }
	void SetAge(const int age)
	{
		if (age >= 0) m_age = age;
	}

	void SetPet(Animal* pPet) { m_pPet = pPet; }

	// accessor methods (getters)
	std::string GetName() const { return m_name; }
	int GetAge() const { return m_age; }
	Animal* GetPet() const { return m_pPet; }

	// other methods
	void Display() const
	{
		std::cout << GetName() << " is " << GetAge() << " years old.\n";
		if (!m_pPet) return;

		std::cout << GetName() << "'s pet info:\n";
		m_pPet->Display();
	}
};