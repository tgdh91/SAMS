#pragma once
#include <string>
#include <vector>
#include "Class.h"

using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(unsigned int, string, string, vector<Class>);
	~Teacher();
	void Give_Grade();
	void Print_Class();
	void View_Student();
	string Get_Name();
	vector<Class>* Get_Class();

private:
	unsigned int id;
	string name;
	string school;
	vector<Class> Class_List;
};