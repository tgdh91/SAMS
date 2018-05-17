#include "List.h"

List::List(){}

List::~List(){}

vector<Student> List::Get_Student()
{
	return student;
}

vector<Teacher> List::Get_Teacher()
{
	return teacher;
}

vector<Course> List::Get_Course()
{
	return course;
}

void List::Add_Student(Student s)
{
	student.push_back(s);
}

void List::Add_Teacher(Teacher t)
{
	teacher.push_back(t);
}

void List::Add_Course(Course c)
{
	course.push_back(c);
}

Class* List::Curricula_variable(string teac, string course)
{
	for (int i = 0; i < teacher.size(); i++)
	{
		if (teacher[i].Get_Name() == teac)
		{
			for (int j = 0; j <= (*(teacher[i].Get_Class())).size(); j++)
			{
				if ((*(teacher[i].Get_Class()))[j].name == course)
					return &((*(teacher[i].Get_Class()))[j]);
			}
		}
	}
}