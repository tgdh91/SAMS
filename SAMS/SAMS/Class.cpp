#include "Class.h"

using namespace std;

Class::Class(){}

Class::~Class(){}

void Class::Reset(string Name, bool ifgrade, vector<Student> &student)
{
	name = Name;
	Ifgrade = ifgrade;
	Student_List.clear();
	for (int i = 0; i < student.size(); i++)
	{
		Student_List.push_back(&(student[i]));
	}
}

ofstream& operator<<(ofstream& file, Class& c)
{
	file << c.Ifgrade << endl;
	file << c.Student_List.size() << endl;
	for (int i = 0; i < c.Student_List.size(); i++)
	{
		file << c.Student_List[i]->Get_ID() << endl;
	}
	return file;
}

ifstream& operator>>(ifstream& file, Class& c)
{
	file >> c.Ifgrade;
	int n;
	file >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		file >> a;
		c.Student_List.push_back(&(Data.student[a - 201801]));
	}
	return file;
}
