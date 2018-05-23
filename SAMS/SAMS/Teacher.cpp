#include "Teacher.h"
#include <vector>
#include <iostream>

using namespace std;

Teacher::Teacher(){}

Teacher::~Teacher(){}

void Teacher::Reset(string ID, string Name, string School, vector<Class> Classes)
{
	id = ID;
	name = Name;
	school = School;
	Class_List.assign(Classes.begin(), Classes.end());
}

void Teacher::Give_Grade()
{
	Print_Class();
	cout << "Please input the NO. of the course you want to give grade!" << endl;
	int c;
	cin >> c;
	while (c < 1 || c > Class_List.size())
	{
		cout << "Input error! Please try again!" << endl;
		cin >> c;
	}

	c--;

	if (Class_List[c].Ifgrade)
	{
		cout << "Grade has been submit! Please press any key to return!" << endl;
		system("pause");
		return;
	}
	system("cls");

	for (int i = 0; i < Class_List[c].Student_List.size(); i++)
	{
		cout << (Class_List[c].Student_List[i])->Get_Name() << ':';
		for (int j = 0; j < (Class_List[c].Student_List[i])->course.size(); j++)
		{
			if ((Class_List[c].Student_List[i])->course[j].Get_name() == Class_List[c].name)
			{
				double g = -1;
				cin >> g;
				while (g < 0 || g > 100)
				{
					cout << "Input error! Please try again!" << endl;
				}
				(Class_List[c].Student_List[i])->course[j].Input_Grade(g);
				cout << endl;
				break;
			}
		}
	}
	Class_List[c].Ifgrade = 1;
	system("pause");
}

void Teacher::Print_Class()
{
	for (int i = 0; i < Class_List.size(); i++)
	{
		cout << i + 1 << '\t' << Class_List[i].name << endl;
	}
}

void Teacher::View_Student()
{
	Print_Class();
	cout << "Please input the NO. of the course you want to view! Press '0' to return!" << endl;
	int c;
	cin >> c;
	if (c == 0)
		return;
	while (c < 1 || c > Class_List.size())
	{
		cout << "Input error! Please try again!" << endl;
		cin >> c;
	}
	
	system("cls");
	c--;

	for (int i = 0; i < Class_List[c].Student_List.size(); i++)
	{
		cout << i + 1 << '\t' << Class_List[c].Student_List[i]->Get_Name() << endl;
	}

	cout << "Please input the NO. of the student you want to view! Press '0' to return!" << endl;
	int d;
	cin >> d;
	if (d == 0)
		return;
	while (d < 1 || d > Class_List[c].Student_List.size())
	{
		cout << "Input error! Please try again!" << endl;
		cin >> d;
	}
	d--;
	Class_List[c].Student_List[d]->Print_Student();

	system("pause");
}

string Teacher::Get_Name()
{
	return name;
}

vector<Class>* Teacher::Get_Class()
{
	return &Class_List;
}

string Teacher::Get_ID()
{
	return id;
}