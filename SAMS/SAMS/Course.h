#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Class.h"
#include "List.h"


using namespace std;

class Course
{
public:
	Course();
	~Course();
	double GPA();
	void Print_Grade();
	void Print_State();
	void Change_State(Student*);
	string Get_name();
	void Input_Grade(double);
	int Get_kind();
	double Get_Grade();
	void Reset(int, string, string, string, int, double);

private:
	int kind;	//0为必修，1为选修, 2为未选
	string id;
	string name;
	string teacher;
	int credit;
	double grade;	//学生成绩，-1为未提交
};