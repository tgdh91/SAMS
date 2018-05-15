#pragma once
#include <string>
#include <vector>
#include "Course.h"


using namespace std;

class Student
{
public:
	Student();
	Student(unsigned int, string, string, unsigned int, vector<Course*>);
	~Student();
	void Get_Grade();
	void Change_Course();

private:
	unsigned int id;
	string name;
	string school;
	unsigned int classid;
	vector<Course*> course;
};