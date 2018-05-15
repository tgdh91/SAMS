#pragma once
#include "Course.h"

using namespace std;

class Required_Course : public Course
{
public:
	Required_Course();
	~Required_Course();
	virtual double GPA();

private:

};