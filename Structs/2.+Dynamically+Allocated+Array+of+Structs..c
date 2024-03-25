#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Lesson: Dynamically Allocated Array of Structs
typedef struct point {
	int x;
	int y;
}Point;

int main()
{
	Point* pointsArr;
	int totalPoints;
	int i;

	printf("Enter the total number of points: ");
	scanf("%d", &totalPoints);

	// Making the Dynamic Memory Allocation (at run time..)
	pointsArr = (Point*)malloc(sizeof(Point) * totalPoints);

	// Iterating over all of the Point Array (and reading input into each of them)
	for (i = 0; i < totalPoints; i++)
	{
		printf("Enter point #%d 'x' coordinate: ", i+1);
		scanf("%d", &pointsArr[i].x);
		printf("Enter point #%d 'y' coordinate: ", i+1);
		scanf("%d", &pointsArr[i].y);
	}

	// Accessing and printing all the values of each of the "Dynamic Array of Points"
	for (i = 0; i < totalPoints; i++)
	{
		printf("Point #%d = (%d, %d)\n", i + 1, pointsArr[i].x, pointsArr[i].y);
	}
}
