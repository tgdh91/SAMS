#pragma once
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Class.h"
#include "Course.h"

class List
{
public:
	List();
	~List();
	vector<Student> Get_Student();
	vector<Teacher> Get_Teacher();
	vector<Course> Get_Course();
	vector<Class> Get_Class();
	void Add_Student(Student);
	void Add_Teacher(Teacher);
	void Add_Course(Course);
	void Add_Class(Class);
	Class* Curricula_variable(string, string);

private:
	vector<Student> student;
	vector<Teacher> teacher;
	vector<Course> course;
};

List Data;