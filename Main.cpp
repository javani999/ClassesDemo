
// Classes Demo
// Ryan

#include <conio.h>

#include "Dog.h"
#include "Cat.h"
#include "Person.h"

int main()
{
	Dog derp;
	derp.SetAge(15);
	derp.SetName("Derp");
	derp.Display();
	derp.Speak();

	//Animal a;
	//a.SetName("Fluffy");
	//a.SetAge(-4);
	//a.Display();
	//a.Speak();

	//Person p("Ryan", 5);
	//p.SetPet(&a);
	//p.Display();

	//{
	//	Person p2;
	//	p2.SetAge(56);
	//	p2.SetName("Jonathan");
	//	p2.Display();
	//}

	Person* pPerson = new Person("Nicholas", 4);
	delete pPerson;

	Cat ringo;
	ringo.SetAge(17);
	ringo.SetName("ringo");
	ringo.Display();
	ringo.Speak();

	std::vector<Animal*> animals;
	animals.push_back(&ringo);
	animals.push_back(&derp);

	for (Animal* pAnimal : animals)
	{
		pAnimal->Speak();
	}
	
	(void)_getch();
	return 0;
}
