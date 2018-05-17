#pragma once
#include <vector>
#include "Student.h"

using namespace std;
class Class
{
public:
	Class();
	~Class();
	string name;
	//bool Ifteach;// 0为不任教，1为任教
	bool Ifgrade;// 0为未提交，1为提交
	vector<Student> Student_List;
};