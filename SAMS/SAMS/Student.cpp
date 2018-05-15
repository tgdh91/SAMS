#include "Student.h"
#include <vector>
#include <iostream>


using namespace std;

Student::Student(){}

Student::~Student(){}

Student::Student(unsigned int ID, string Name, string School, unsigned int ClassID, vector<Course*> Courses)
{
	id = ID;
	name = Name;
	school = School;
	classid = ClassID;
	course.assign(Courses.begin(), Courses.end());
}

void Student::Get_Grade()
{
	cout << "Course\tGrade\tGPA\t" << endl;
	for (vector<Course*>::iterator it = course.begin(); it != course.end(); it++)
	{
		(*it)->Print_Grade();
	}
}

void Student::Change_Course()
{

}