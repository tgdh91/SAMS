#pragma once
#include <string>
#include <vector>
#include "Course.h"

using namespace std;

class Teacher
{
public:
	Teacher();
	~Teacher();

private:
	unsigned int id;
	string name;
	string school;
	vector<Course*> course;
};