#include "Course.h"
#include <iostream>
#include <iomanip>
#include "List.h"

using namespace std;

void Course::Print_Grade()
{
	if (kind != 2)
	{
		if (grade != -1)
			cout << name << '\t' << grade << '\t' << setprecision(4) << GPA() << endl;
	}
}

void Course::Print_State()
{
	if (kind == 0)
		cout << name << "\tRequired" << endl;
	if (kind == 1)
		cout << name << "\tSelected" << endl;
	if (kind == 2)
		cout << name << "\tUnselected" << endl;
}

void Course::Change_State(Student* s)
{
	Class* c = Data.Curricula_variable(teacher, name);
	if (kind == 1)
	{
		for (vector<Student>::iterator it = (c->Student_List).begin(); it != (c->Student_List).end(); it++)
		{
			if (it->Get_Name() == s->Get_Name)
			{
				(c->Student_List).erase(it);
				break;
			}
		}
		kind = 2;
	}
	if (kind == 2)
	{
		(c->Student_List).push_back(*s);
		kind = 1;
	}
}
		

double Course::GPA()
{
	double gpa;
	if (kind = 0)
		gpa = sqrt(grade / 10) * credit;
	else
		gpa = sqrt(grade / 15) * credit;

	return gpa;
}

string Course::Get_name()
{
	return name;
}

void Course::Grade(double g)
{
	grade = g;
}

int Course::Get_kind()
{
	return kind;
}