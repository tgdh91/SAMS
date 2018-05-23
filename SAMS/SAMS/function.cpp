#include "function.h"
#include <iostream>
#include <string>
#include "List.h"

using namespace std;

char Welcome()
{
	cout << "********************************************************" << endl;
	cout << "*                                                      *" << endl;
	cout << "*   Welcome to Studnet Achievement Management System   *" << endl;
	cout << "*                                                      *" << endl;
	cout << "********************************************************" << endl;
	cout << "1.Student Entrance" << endl;
	cout << "2.Teacher Entrance" << endl;
	cout << "0.Exit" << endl;
	char c;
	cin >> c;
	while (c < '0' || c > '2')
	{
			cout << "Input error! Please try again!" << endl;
			c = getchar();
	}
	system("cls");

	return c;
}

Student* Student_Login()
{
	string _ID;
	cout << "Please input your ID: ";

		cin >> _ID;
		int i;
		for (i = 0; i < Data.student.size(); i++)
		{
			if ((Data.student[i].Get_ID()) == _ID)
			{
				cout << "Login successfully!" << endl;
				system("pause");
				return &Data.student[i];
			}
		}

		cout << "Inexistence ID!" << endl;
		system("pause");
		return NULL;
}

char Student_Func(Student *user)

{
	cout << "1.Change course" << endl;
	cout << "2.View grade" << endl;
	cout << "0.Return" << endl;
	char c = 0;
	cin >> c;
	while (c < '0' || c > '2')
	{
			cout << "Input error! Please try again!" << endl;
			c = getchar();
	}
	if (c == '1')
	{
		system("cls");
		(*user).Change_Course();
	}
	if (c == '2')
	{
		system("cls");
		(*user).Get_Grade();
		system("pause");
		system("cls");
	}

	return c;

}

Teacher* Teacher_Login()
{
	string _ID;
	cout << "Please input your ID: ";
		cin >> _ID;
		int i;
		for (i = 0; i < Data.teacher.size(); i++)
		{
			if ((Data.teacher[i].Get_ID()) == _ID)
			{
				cout << "Login successfully!" << endl;
				system("pause");
				return &(Data.teacher[i]);
			}
		}
		cout << "Inexistence ID!" << endl;
		system("pause");
		return NULL;

}

char Teacher_Func(Teacher* user)
{
	cout << "1.Give grade" << endl;
	cout << "2.View student" << endl;
	cout << "0.Return" << endl;
	char c = 0;
	cin >> c;
	while (c < '0' || c > '2')
	{
			cout << "Input error! Please try again!" << endl;
			c = getchar();
	}
	if (c == '1')
	{
		system("cls");
		(*user).Give_Grade();
		system("cls");
	}
	if (c == '2')
	{
		system("cls");
		(*user).View_Student();
		system("cls");
	}

	return c;
}