#pragma once
#include <string>
#include <vector>
#include "Course.h"


using namespace std;

class Student
{
public:
	Student();
	Student(unsigned int, string, string, unsigned int, vector<Course>);
	~Student();
	void Get_Grade();
	void Change_Course();
	void Print_Student();
	string Get_Name();
	vector<Course> course;

private:
	unsigned int id;
	string name;
	string school;
	unsigned int classid;

};