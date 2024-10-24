
#pragma once

#include <iostream>

class Person;

class Animal
{

private:

	std::string m_name;
	int m_age = 0;

	Person* m_pOwner = nullptr;

public:

	Animal() { } // default

	Animal(const std::string name, const int age)
	{
		SetName(name);
		SetAge(age);
	}

	virtual ~Animal() { }
	// mutator methods (setters)
	virtual void SetName(const std::string name) { m_name = name; }
	virtual void SetAge(const int age)
	{
		if (age >= 0) m_age = age;
	}

	void SetOwner(Person* pOwner) { m_pOwner = pOwner; }

	// accessor methods (getters)
	std::string GetName() const { return m_name; }
	virtual int GetAge() const { return m_age; }

	// other methods
	virtual void Display() const;

	//virtual -- method can be overriden by derived class
	virtual void Speak() const { };

	// "=0" makes the method abstract
	//Pure-virtual -- must be overriden by derived class
	virtual void Move() const = 0;
};

