#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Structs Operators and Relations

// Usage of "Relational Operators" (<,>,<=,>=,!=,==)

typedef struct point {
	int x;
	int y;
}Point;

typedef struct employee {
	char name[10];
	float age;
	int id;
}Employee;


int main()
{
	Point p1 = { 3,5 }, p2 = { 2,6 };
	// Error #1 - what fields is used to decide the result?
	if (p1 > p2)
	{
		// Code...
		// Code...
		// printing that "Point1 is greater!.."
	}

	// Error #2 - what fields are we interested? All of them? Or just a few?
	if (p1 == p2)
	{
		// Code...
		// Code...
		// printing that "Both points are equal."
	}
}

int main()
{
	Employee emp1 = { "Jake", 24.5, 123 };
	Employee emp2 = { "John", 30, 342 };
	// Error #1 - what fields is used to decide the result?
	if (emp1 > emp2)
	{
		// Code...
		// Code...
		// printing that "Employee1 is greater!.."
	}

	// Error #2 - what fields are we interested? All of them? Or just a few?
	// Are they equal by ID? By Name? Or all of the fields?
	if (emp1 == emp2)
	{
		// Code...
		// Code...
		// printing that "Both employee instances are equal."
	}
}

