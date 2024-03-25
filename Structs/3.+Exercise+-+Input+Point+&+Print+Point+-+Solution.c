#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Exercise: Write 2 functions:
//			 - Function #1 - gets a point variable and prints its information.
//			 - Function #2 - responsible for getting a point input from the user
//							 and then return it.

// Solution //

typedef struct point {
	int x;
	int y;
}Point;

void printPoint(Point p1)
{
	printf("Point x = %d\n", p1.x);
	printf("Point y = %d\n", p1.y);
}

Point inputPoint()
{
	Point myPoint;
	printf("Enter x coordinate: ");
	scanf("%d", &myPoint.x);
	printf("Enter y coordinate: ");
	scanf("%d", &myPoint.y);
	return myPoint;
}

int main()
{
	Point p1 = inputPoint();
	printf("P1 before changes\n");
	printPoint(p1);
	p1.x += 1;
	p1.y += 3;
	printf("P1 after changes\n");
	printPoint(p1);
	return 0;
}
