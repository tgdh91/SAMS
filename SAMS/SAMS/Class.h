#pragma once
#include <vector>
#include "Student.h"

using namespace std;

class Student;

class Class
{
public:
	Class();
	~Class();
	void Reset(string, bool, vector<Student>&);
	string name;
	//bool Ifteach;// 0Ϊ���ν̣�1Ϊ�ν�
	bool Ifgrade;// 0Ϊδ�ύ��1Ϊ�ύ
	vector<Student*> Student_List;
};