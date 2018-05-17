#include "Optional_Course.h"

double Optional_Course::GPA()
{
	double gpa = sqrt(grade / 15) * credit;
}