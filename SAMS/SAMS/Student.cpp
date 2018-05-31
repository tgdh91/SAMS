#include "Student.h"
#include <vector>
#include <iostream>


using namespace std;

Student::Student(){}

Student::~Student(){}

void Student::Reset(string ID, string Name, string School, string ClassID, vector<Course> Courses)
{
	id = ID;
	name = Name;
	school = School;
	classid = ClassID;
	course.assign(Courses.begin(), Courses.end());
}

void Student::Get_Grade()
{
	cout << "1.Grade Order" << endl << "2.Default Order" << endl;
	int c;
	cin >> c;
	while (c < 1 || c > 2)
	{
		cout << "Input error! Please try again!" << endl;
		cin >> c;
	}
	system("cls");
	if (c == 1)
		sort(course.begin(), course.end(), Grade_Comp);
	cout << "Course\tGrade\tGPA\t" << endl;
	for (vector<Course>::iterator it = course.begin(); it != course.end(); it++)
	{
		it->Print_Grade();
	}
	sort(course.begin(), course.end(), ID_Comp);
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
		while (c < 0 || c > i)
		{
			cout << "Input error! Please try again!" << endl;
			cin >> c;
		}
		if (c != 0)
		{
			if (course[c - 1].Get_kind() == 0)
			{
				cout << "Can't change required course!" << endl;
				system("pause");
				system("cls");
				continue;
			}
			else if (course[c - 1].Ifgrade == 1)
			{
				cout << "Can't change the course already has grade!" << endl;
				system("pause");
				system("cls");
				continue;
			}
			it = course.begin() + c - 1;
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

string Student::Get_ID()
{
	return id;
}

ofstream& operator<<(ofstream& file, Student& s)
{
	for (int i = 0; i < 6; i++)
	{
		file << s.course[i].Get_kind() << ' ' << s.course[i].Ifgrade << ' ' << s.course[i].Get_Grade() << endl;
	}
	return file;
}

ifstream& operator>>(ifstream& file, Student& s)
{
	for (int i = 0; i < 6; i++)
	{
		file >> s.course[i].kind;
		file >> s.course[i].Ifgrade;
		file >> s.course[i].grade;
	}
	return file;
}