#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union info{
	char firstName[20];
	int age;
};

struct point_struct
{
    int x;
    int y;
};

union point_union
{
    int x;
    int y;
};


int main()
{
    /*
    union info info1;
    info1.age = 30;
    printf("age = %d\n",info1.age);
    strcpy(info1.firstName,"Hello");
    printf("Name = %s\n",info1.firstName);
    printf("age = %d\n",info1.age);

    /*
    //OUTPUT

    age = 30
    Name = Hello
    age = 1819043144  //Memory is occupied by firstName and garbage value is printed
    */


    struct point_struct p1;
    union point_union p2;

    p1.x = 5;
    p1.y = 7;
    printf("Before struct point = (%d,%d) \n",p1.x,p1.y);
    p1.y = 10;
    printf("After struct point = (%d,%d) \n",p1.x,p1.y);
    p2.x = 3;
    printf("Before union point = (%d,%d) \n",p2.x,p2.y);
    p2.y = 4;
    printf("After union point = (%d,%d) \n",p2.x,p2.y);
    /*
    //OUTPUT
    Before struct point = (5,7)
    After struct point = (5,10)   // when only one value changes in struct
    Before union point = (3,3)   // if undeclared, stored value is used for both fields
    After union point = (4,4)   // Both the values change, if we change one
    */
    return 0;
}
