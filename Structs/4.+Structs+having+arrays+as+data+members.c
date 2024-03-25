#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// structs having arrays as data members

typedef struct employee {
	char name[10];
	float age;
	int id;
}employee;

int main()
{
	employee emp1;
	employee emp2 = { "jake", 24.5, 123 };
	
	// using the "=" to copy "value-by-value" (the members of one struct variable to another of the same type)
	// note: copying static arrays in assignment between two structs variables is a little bit different
	//		 than "simply" copying an array (element by element).
	emp1 = emp2;

	printf("employee #1 name is %s\n", emp1.name);
	printf("employee #2 name is %s\n", emp2.name);

	// making sure that these are a full copies (and not just referring to same place..)
	strcpy(emp1.name,"john");
	emp1.id = 456;

	printf("employee #1 name is %s\n", emp1.name);
	printf("employee #2 name is %s\n", emp2.name);
	printf("employee #1 id is %d\n", emp1.id);
	printf("employee #2 id is %d\n", emp2.id);

	return 0;
}
