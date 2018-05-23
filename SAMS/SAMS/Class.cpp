#include "Class.h"

using namespace std;

Class::Class(){}

Class::~Class(){}

void Class::Reset(string Name, bool ifgrade, vector<Student> &student)
{
	name = Name;
	Ifgrade = ifgrade;
	Student_List.clear();
	for (int i = 0; i < student.size(); i++)
	{
		Student_List.push_back(&(student[i]));
	}
}