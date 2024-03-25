#include <stdio.h>
#include <stdlib.h>

/*
//Challenge #1
struct point{
    int x;
    int y;
};
*/



/*
//Challenge #2
struct date{
    int day;
    int month;
    int year;
};
*/



/*
//Challenge #4

typedef struct date{
    int day;
    int month;
    int year;
}Date;

void printdate(Date dt)
{
    printf("Year = %d, Month = %d, day = %d\n", dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter day : ");
    scanf("%d",&dt.day);
    printf("Enter month : ");
    scanf("%d",&dt.month);
    printf("Enter year : ");
    scanf("%d",&dt.year);

    return dt;
}
*/



/*
//Challenge #5

typedef struct date{
    int day;
    int month;
    int year;
}Date;

void printdate(Date dt)
{
    printf("Year = %d, Month = %d, day = %d\n", dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter day : ");
    scanf("%d",&dt.day);
    printf("Enter month : ");
    scanf("%d",&dt.month);
    printf("Enter year : ");
    scanf("%d",&dt.year);

    return dt;
}

void printnextdate(Date dt)
{
    dt.day = dt.day + 1;

    if(dt.day > 31)
    {
        dt.day = 1;
        dt.month++;
        if(dt.month > 12)
        {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("Tommorow's Date : \n");
    printdate(dt);
}
*/



/*
//Exercise - 1

typedef struct point{
    int x;
    int y;
}Point;

void printpoint(Point p1)
{
    printf("The point is (%d,%d)\n",p1.x,p1.y);
}

Point inputpoint()
{
    Point p1;
    printf("Enter X Coordinate : ");
    scanf("%d",&p1.x);
    printf("Enter Y Coordinate : ");
    scanf("%d",&p1.y);

    return p1;
}
*/




//Exercise - Rational Numbers

typedef struct rational{
    int nume;
    int deno;
}Rational;

Rational input()
{
    Rational r;
    printf("Enter numerator : ");
    scanf("%d",&r.nume);
    printf("Enter denominator : ");
    scanf("%d",&r.deno);

    return r;
}


Rational increment(Rational r1)
{
    Rational r;
    r.nume = r1.nume+r1.deno;
    r.deno = r1.deno;
    return r;
}

Rational decrement(Rational r1)
{
    Rational r;
    r.nume = r1.nume-r1.deno;
    r.deno = r1.deno;
    return r;
}

Rational addition(Rational r1,Rational r2)
{
    Rational r;
    r.nume = (r1.nume * r2.deno) + (r1.deno * r2.nume);
    r.deno = r1.deno * r2.deno;
    return r;
}

Rational subtraction(Rational r1,Rational r2)
{
    Rational r;
    r.nume = (r1.nume * r2.deno) - (r1.deno * r2.nume);
    r.deno = r1.deno * r2.deno;
    return r;
}

Rational multiplication (Rational r1,Rational r2)
{
    Rational r;
    r.nume = (r1.nume * r2.nume);
    r.deno = (r1.deno * r2.deno);
    return r;
}

Rational division (Rational r1,Rational r2)
{
    Rational r;
    r.nume = (r1.nume * r2.deno);
    r.deno = (r1.deno * r2.nume);
    return r;
}

int smaller (Rational r1,Rational r2)
{
    Rational r;
    r.deno = r1.deno*r2.deno;
    if((r1.nume * r.deno) < (r2.nume * r.deno))
        return 1;
    else
        return 0;
}

int bigger (Rational r1,Rational r2)
{
     Rational r;
    r.deno = r1.deno*r2.deno;
    if((r1.nume * r.deno) > (r2.nume * r.deno))
        return 1;
    else
        return 0;
}

int equal(Rational r1,Rational r2)
{
    Rational r;
    r.deno = r1.deno*r2.deno;
    if(r1.nume * r.deno == r2.nume * r.deno)
        return 1;
    else
        return 0;
}

int Notequal(Rational r1,Rational r2)
{
    Rational r;
    r.deno = r1.deno*r2.deno;
     if(r1.nume * r.deno != r2.nume * r.deno)
        return 1;
    else
        return 0;
}


int main()
{
    /*
    //Challenge #1
    struct point p1;
    printf("Enter X Coordinate : ");
    scanf("%d",&p1.x);
    printf("Enter Y Coordinate : ");
    scanf("%d",&p1.y);
    printf("The point is (%d,%d)\n",p1.x,p1.y);
    */

    /*
    //Challenge #2
    struct date mydate1;
    printf("Enter day : ");
    scanf("%d",&mydate1.day);
    printf("Enter month : ");
    scanf("%d",&mydate1.month);
    printf("Enter year : ");
    scanf("%d",&mydate1.year);
    printf("The date is %d/%d/%d\n",mydate1.day,mydate1.month,mydate1.year);
    */

    /*
    //Challenge #4
    Date today,tommorrow;
    today = inputDate();
    tommorrow = inputDate();
    printdate(today);
    printdate(tommorrow);
    */

    /*
    //Challenge #5
    Date today,tommorrow;
    today = inputDate();
    printf("Today's Date : \n");
    printdate(today);
    printnextdate(today);
    */


    /*
    //Exercise - 1
    Point p1;
    p1 = inputpoint();
    printf("Before \n");
    printpoint(p1);
    p1.x += 3;
    p1.y += 4;
    printf("After \n");
    printpoint(p1);
    */


    //Exercise - Rational Numbers
    Rational r1,r2;
    r1 = input();
    printf("First Rational Number = %d/%d\n",r1.nume,r1.deno);
    r2=input();
    printf("Second Rational Number = %d/%d\n",r2.nume,r2.deno);
    printf("\n\n");
    printf("First Rational Number increment = %d/%d\n",increment(r1));
    printf("Second Rational Number increment = %d/%d\n",increment(r2));

    printf("First Rational Number decrement = %d/%d\n",decrement(r1));
    printf("Second Rational Number decrement = %d/%d\n",decrement(r2));

    printf("addition = %d/%d\n",addition(r1,r2));
    printf("subtraction = %d/%d\n",subtraction(r1,r2));
    printf("multiplication = %d/%d\n",multiplication(r1,r2));
    printf("division = %d/%d\n",division(r1,r2));

    printf("Is r1 smaller than r2 = %d\n",smaller(r1,r2));
    printf("Is r1 bigger than r2 = %d\n",bigger(r1,r2));
    printf("Is r1 equal to r2 = %d\n",equal(r1,r2));
    printf("Is r1 Not equal to r2 = %d\n",Notequal(r1,r2));


    return 0;
}

//OUTPUT

/*
//Challenge #1
Enter X Coordinate : 5
Enter Y Coordinate : 6
The point is (5,6)

//Challenge #2
Enter day : 14
Enter month : 08
Enter year : 2000
The date is 14/8/2000

//Challenge #4
Enter day : 24
Enter month : 12
Enter year : 2023
Enter day : 25
Enter month : 12
Enter year : 2023
Year = 2023, Month = 12, day = 24
Year = 2023, Month = 12, day = 25

//Challenge #5
Enter day : 24
Enter month : 12
Enter year : 2023
Today's Date :
Year = 2023, Month = 12, day = 24
Tommorow's Date :
Year = 2023, Month = 12, day = 25

//Exercise - 1
Enter X Coordinate : 5
Enter Y Coordinate : 6
Before
The point is (5,6)
After
The point is (8,10)

//Exercise - Rational Numbers
Enter numerator : 1
Enter denominator : 2
First Rational Number = 1/2
Enter numerator : 3
Enter denominator : 4
Second Rational Number = 3/4
First Rational Number increment = 3/2
Second Rational Number increment = 7/4
First Rational Number decrement = -1/2
Second Rational Number decrement = -1/4
addition = 10/8
subtraction = -2/8
multiplication = 3/8
division = 4/6
Is r1 smaller than r2 = 1
Is r1 bigger than r2 = 0
Is r1 equal to r2 = 0
Is r1 Not equal to r2 = 1







*/
