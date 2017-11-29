#pragma once
#include <vector>
#include "Person.h"
#include "Module.h"

class Lecturer :
	public Person
{

private:
	std::string StaffID_;
	std::string subjectArea_;
	std::vector<Module> modulesTaught_;

public:
	Lecturer();
	Lecturer(std::string name, std::string email, std::string StaffID, std::string subjectArea, std::vector<Module> modulesTaught);
	~Lecturer();

	std::string GetStaffID() const;
	void SetStaffID(std::string staffID);

	std::string GetSubjectArea() const;
	void SetSubjectArea(std::string subjectArea);

	std::vector<Module> GetModulesTaught() const;
	void SetModulesTaught(std::vector<Module> modules);

	std::string ToString();

};

