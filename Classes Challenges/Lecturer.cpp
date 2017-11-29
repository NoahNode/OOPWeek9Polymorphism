#include "Lecturer.h"



Lecturer::Lecturer()
{
}

Lecturer::Lecturer(std::string name, std::string email, std::string StaffID, std::string subjectArea, std::vector<Module> modulesTaught) : 
	Person{name, email}, StaffID_ { StaffID }, subjectArea_{ subjectArea }, modulesTaught_{ modulesTaught }
{
}

Lecturer::~Lecturer()
{
}



std::string Lecturer::GetStaffID() const {
	return StaffID_;
}

void Lecturer::SetStaffID(std::string staffID) {
	StaffID_ = staffID;
}

std::string Lecturer::GetSubjectArea() const {
	return subjectArea_;
}
void Lecturer::SetSubjectArea(std::string subjectArea) {
	subjectArea_ = subjectArea;
}

std::vector<Module> Lecturer::GetModulesTaught() const {
	return modulesTaught_;
}
void Lecturer::SetModulesTaught(std::vector<Module> modules) {
	modulesTaught_ = modules;
}

std::string Lecturer::ToString() {
	std::string moduleString;
	for each (Module module in modulesTaught_)
	{
		moduleString + ", " + module.getModuleTitle();
	}
	std::string PersonString = Person::ToString() + ", " + subjectArea_ + ", " + moduleString;
	return PersonString;
}
