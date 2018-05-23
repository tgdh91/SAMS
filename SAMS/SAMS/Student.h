#pragma once
#include <string>
#include <vector>
#include "Course.h"

using namespace std;

class Course;

class Student
{
public:
	Student();
	void Reset(string, string, string, string, vector<Course>);
	~Student();
	void Get_Grade();
	void Change_Course();
	void Print_Student();
	string Get_Name();
	vector<Course> course;
	string Get_ID();

private:
	string id;
	string name;
	string school;
	string classid;
};