#include <string>
#include <iostream>

#pragma once
class Person
{
private:
	std::string name_;
	std::string email_;

public:
	Person();
	Person(std::string name, std::string email);
	
	std::string GetName()const;
	void SetName(std::string name);

	std::string GetEmail()const;
	void SetEmail(std::string email);

	virtual std::string ToString();
};

