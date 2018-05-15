#pragma once
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

class List
{
public:
	List();
	~List();
	vector<Student> Get_Student();
	vector<Teacher> Get_Teacher();
	vector<Course*> Get_Course();
	void Add_Student(Student);
	void Add_Teacher(Teacher);
	void Add_Course(Course);

private:
	vector<Student> student;
	vector<Teacher> teacher;
	vector<Course*> course;
};