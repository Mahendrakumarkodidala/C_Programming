#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// lesson: initializing a struct
typedef struct point {
	int x;
	int y;
}point;

int main()
{
	// declaring a "point" variable (without initialization)
	point p1;

	// initializing a "point" variable (members in order)
	point p2 = { 5, 7 };

	// using designated initializer
	point p3 = { .x = 3, .y = 4 };
	
	// using designated initializer (out of order)
	point p4 = { .y = 10, .x = 2 };

	// designated initializer (other members are initialized with 0)
	point p5 = { .x = 1 };
}
