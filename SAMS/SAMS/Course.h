#pragma once
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Course
{
public:
	virtual double GPA();
	void Print_Grade();

private:
	int kind;	//0为必修，1为先修, 2为未选
	unsigned int ID;
	string name;
	string teacher;
	unsigned int credit;
	double grade;	//学生成绩，-1为未提交
	vector<Student> student_list;
};