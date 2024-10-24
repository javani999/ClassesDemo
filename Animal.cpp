
#include "Person.h"

void Animal::Display() const
{
	std::cout << GetName() << " is " << GetAge() << " years old.\n";

	if (!m_pOwner) return;
	std::cout << m_pOwner->GetName();
}