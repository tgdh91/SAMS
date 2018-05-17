#include "Student.h"
#include <vector>
#include <iostream>


using namespace std;

Student::Student(){}

Student::~Student(){}

Student::Student(unsigned int ID, string Name, string School, unsigned int ClassID, vector<Course> Courses)
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
	for (vector<Course>::iterator it = course.begin(); it != course.end(); it++)
	{
		it->Print_Grade();
	}
}

void Student::Change_Course()
{
	int c = 1;
	vector<Course>::iterator it;
	while (c != 0)
	{
		int i = 0;
		for (it = course.begin(); it != course.end(); it++)
		{
			i++;
			cout << i << '\t';
			it->Print_State();
		}

		cout << "Please input the NO. of the course you want to change! Press '0' to return!" << endl;
		cin >> c;
		while (c < 0 || c > i || course[c].Get_kind == 0)
		{
			cout << "Input error! Please try again!" << endl;
			cin >> c;
		}
		if (c != 0)
		{
			it = course.begin() + (c--);
			it->Change_State(this);

		}
		
		system("cls");
	}


}

void Student::Print_Student()
{
	cout << id << '\t' << name << '\t' << school << '\t' << classid << endl;
}

string Student::Get_Name()
{
	return name;
}

