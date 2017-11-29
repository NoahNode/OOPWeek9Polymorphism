#include "Person.h"


//Constructors
Person::Person()
{
}

Person::Person(std::string name, std::string email) : name_{ name }, email_{ email }
{
}

//Getters and setters
std::string Person::GetName() const
{
	return name_;
}

void Person::SetName(std::string name) {
	name_= name;
}

std::string Person::GetEmail() const {
	return email_;
}
void Person::SetEmail(std::string email) {
	email_ = email;
}

std::string Person::ToString() {
	std::string PersonString = GetName() + ", " + GetEmail();
	return PersonString;
}