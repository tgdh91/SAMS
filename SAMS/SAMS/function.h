#pragma once
#include "Student.h"
#include <iostream>
#include <string>
#include "Teacher.h"
#include "Course.h"


using namespace std;

class Course;

extern char Welcome();

extern Student* Student_Login();

extern char Student_Func(Student*); //学生功能选择

extern Teacher* Teacher_Login();

extern char Teacher_Func(Teacher*);

extern void Save();

extern bool Grade_Comp(Course, Course);

extern bool ID_Comp(Course, Course);