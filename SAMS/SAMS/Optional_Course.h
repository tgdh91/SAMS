#pragma once
#include "Course.h"

using namespace std;

class Optional_Course : public Course
{
public:
	Optional_Course();
	~Optional_Course();
	virtual double GPA();

private:

};