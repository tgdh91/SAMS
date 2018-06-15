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
	int Ifgrade = 0;	//0为成绩未提交
	int kind;	//0为必修，1为选修, 2为未选
	double grade;	//学生成绩，-1无成绩
	string Get_ID();
	string Get_Teacher()
	{
		return teacher;
	}

private:
	string id;
	string name;
	string teacher;
	int credit;
};