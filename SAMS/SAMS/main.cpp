#include "List.h"
#include "Teacher.h"
#include "Class.h"
#include "Course.h"
#include "Student.h"
#include "function.h"
#include <iostream>

using namespace std;

List Data;

int main()
{
	
	char System = 0;
	while (System != '0')
	{
		system("cls");
		System = Welcome();
		if(System == '1') //学生入口
		{
			Student *Suser = Student_Login();
			
			if (Suser == NULL)
				continue;
			system("cls");
			while(Student_Func(Suser) != '0');
		}
		if (System == '2')
		{
			Teacher *Tuser = Teacher_Login();
			if (Tuser == NULL)
				continue;
			system("cls");
			while (Teacher_Func(Tuser) != '0');
		}
	}

	return 0;
}