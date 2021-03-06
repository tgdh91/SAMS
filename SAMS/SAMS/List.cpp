#include "List.h"

using namespace std;

List::List()
{
	ifstream file("document.txt");
	Course *c = new Course;
	c->Reset(0, "001", "Chinese", "Zhao", 4, -1);
	course.push_back(*c);
	c->Reset(0, "002", "Math", "Qian", 4, -1);
	course.push_back(*c);
	c->Reset(0, "003", "English", "Sun", 4, -1);
	course.push_back(*c);
	c->Reset(2, "004", "Art", "Zhao", 3, -1);
	course.push_back(*c);
	c->Reset(2, "005", "Music", "Qian", 3, -1);
	course.push_back(*c);
	c->Reset(2, "006", "PE", "Sun", 3, -1);
	course.push_back(*c);
	delete c;

	Student *s = new Student;
	s->Reset("201801", "Sam", "Computer", "20181234", course);
	file >> *s;
	student.push_back(*s);
	s->Reset("201802", "DaMing", "Computer", "20181234", course);
	file >> *s;
	student.push_back(*s);
	s->Reset("201803", "Amy", "Computer", "20181234", course);
	file >> *s;
	student.push_back(*s);
	s->Reset("201804", "Lili", "Computer", "20181234", course);
	file >> *s;
	student.push_back(*s);
	delete s;

	Class *cl = new Class;
	vector<Student> Empty_Student;
	cl->Reset("Chinese", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	cl->Reset("Math", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	cl->Reset("English", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	cl->Reset("Art", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	cl->Reset("Music", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	cl->Reset("PE", 0, Empty_Student);
	file >> *cl;
	classes.push_back(*cl);
	delete cl;

	Teacher *t = new Teacher;
	vector<Class> Temp_Class;
	Temp_Class.push_back(classes[0]);
	Temp_Class.push_back(classes[3]);
	t->Reset("201001", "Zhao", "Computer", Temp_Class);
	teacher.push_back(*t);
	Temp_Class.clear();
	Temp_Class.push_back(classes[1]);
	Temp_Class.push_back(classes[4]);
	t->Reset("201002", "Qian", "Computer", Temp_Class);
	teacher.push_back(*t);
	Temp_Class.clear();
	Temp_Class.push_back(classes[2]);
	Temp_Class.push_back(classes[5]);
	t->Reset("201003", "Sun", "Computer", Temp_Class);
	teacher.push_back(*t);
	Temp_Class.clear();
	delete t;
	file.close();
}

List::~List(){}

vector<Student>* List::Get_Student()
{
	return &student;
}

vector<Teacher> List::Get_Teacher()
{
	return teacher;
}

vector<Course> List::Get_Course()
{
	return course;
}

vector<Class>* List::Get_Class()
{
	return &classes;
}

Class* List::Curricula_variable(string teac, string course)	//在Class内查找相应的course
{
	for (int i = 0; i < teacher.size(); i++)
	{
		if (teacher[i].Get_Name() == teac)
		{
			for (int j = 0; j < teacher[i].Class_List.size(); j++)
			{
				if (teacher[i].Class_List[j].name == course)
					return &(teacher[i].Class_List[j]);
			}
		}
	}
}

