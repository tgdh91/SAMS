#pragma once
#include "Student.h"
#include <iostream>
#include <string>
#include "Teacher.h"


using namespace std;

extern char Welcome();

extern Student* Student_Login();

extern char Student_Func(Student*); //学生功能选择

extern Teacher* Teacher_Login();

extern char Teacher_Func(Teacher*);