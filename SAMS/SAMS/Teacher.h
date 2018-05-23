#pragma once
#include <string>
#include <vector>
#include "Class.h"

using namespace std;

class Class;

class Teacher
{
public:
	Teacher();
	void Reset(string, string, string, vector<Class>);
	~Teacher();
	void Give_Grade();
	void Print_Class();
	void View_Student();
	string Get_Name();
	vector<Class>* Get_Class();
	string Get_ID();
	vector<Class> Class_List;

private:
	string id;
	string name;
	string school;
	
};