#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    //Numbers are same
    float n1,n2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);
    if (n1==n2)
        printf("True\n");
    else
        printf("False\n");
    */


    /*
    //double digit or triple digit
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num >= 10 && num <= 99)
        printf("%d is a double digit number\n",num);
    else if (num >= 100 && num <= 999)
        printf("%d is a triple digit number\n",num);
    else
        printf("%d is a neither double digit nor triple digit number\n",num);
    */


    /*
    //Absolute value
    int num;
    printf("Enter the Integer : ");
    scanf("%d",&num);
    if(num >= 0)
        printf(" The absolute value of %d = |%d|\n",num,num);
    else
        printf(" The absolute value of %d = |%d|\n",num,-num);
    */


    /*
    //Quadrant of a point
    int x,y;
    printf("Enter the X and Y coordinates : \n");
    scanf("%d%d",&x,&y);

    if(x > 0 && y > 0)
        printf("The point (%d,%d) lies in 1st Quadrant\n",x,y);
    else if(x < 0 && y > 0)
        printf("The point (%d,%d) lies in 2nd Quadrant\n",x,y);
    else if(x < 0 && y < 0)
        printf("The point (%d,%d) lies in 3rd Quadrant\n",x,y);
    else if(x > 0 && y < 0)
        printf("The point (%d,%d) lies in 4th Quadrant\n",x,y);
    else
        printf("The point (%d,%d) lies at origin\n",x,y);
    */


    /*
    //month name
    int month;
    printf("Enter the month number(1-12) : ");
    scanf("%d",&month);

    switch(month){
        case 1:
           printf("%d - January\n",month);
           break;
        case 2:
           printf("%d - February\n",month);
           break;
        case 3:
           printf("%d - March\n",month);
           break;
        case 4:
           printf("%d - April\n",month);
           break;
         case 5:
           printf("%d - May\n",month);
           break;
         case 6:
           printf("%d - June\n",month);
           break;
         case 7:
           printf("%d - July\n",month);
           break;
         case 8:
           printf("%d - August\n",month);
           break;
         case 9:
           printf("%d - September\n",month);
           break;
        case 10:
           printf("%d - October\n",month);
           break;
        case 11:
           printf("%d - November\n",month);
           break;
        case 12:
           printf("%d - December\n",month);
           break;
        default:
           printf("Enter a valid month number (1-12)\n");
           break;
    }
    */

    /*
    //Unique clock representation
    int sec;
    int h,m,rs;
    printf("Enter number of seconds : ");
    scanf("%d",&sec);

    h = sec/3600;
    m = (sec - h*3600)/60;
    rs = (sec - h*3600)%60;

    if(h < 10)
        printf("0");
    printf("%d :",h);
    if(m < 10)
        printf("0");
    printf("%d :",m);
    if(rs < 10)
        printf("0");
    printf("%d\n",rs);
    */


    /*
    //Divisible 3 numbers
    int n1,n2,n3;
    printf("Enter three numbers : \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if( n1==0 || n2==0 || n3==0)
        printf("Division by zero is not possible\n");
    else if((n1 % n2 == 0 || n2 % n1 == 0) && (n2 % n3 == 0 || n3 % n2 == 0 ) && (n1 % n3 == 0 || n3 % n1 == 0))
        printf("Divisible\n");
    else
        printf("Non-Divisible\n");
    */


    /*
    //Leap year
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year%400==0)
        printf("%d is a leap year\n",year);
    else if (year%100==0)
         printf("%d is not a leap year\n",year);
    else if (year%4==0)
         printf("%d is a leap year\n",year);
    else
         printf("%d is not a leap year\n",year);
    */



    //next day on calendar

    int d,m,y,lp=0;
    printf("Enter the day : ");
    scanf("%d",&d);
    printf("Enter the month : ");
    scanf("%d",&m);
    printf("Enter the year : ");
    scanf("%d",&y);

    //year is leap year or not
    if (m==2)
        if(y%4==0 && (y%100!=0 || y%400==0))
            lp = 1;
    d+=1;

    switch(m){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(d<=31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(d<=30)
            break;
    case 2:
        if(d <= 29 && lp == 1)
            break;
        else if(d <= 28)
            break;
    default:
        d=1;
        m+=1;
        if (m > 12)
        {
            m=1;
            y+=1;
        }
    }

    printf("The next day is %d / %d / %d\n",d,m,y);





    return 0;
}

/*
output

Numbers are same
Enter two numbers :
1
2
False

double digit or triple digit
Enter the number : 5
5 is a neither double digit nor triple digit number

Absolute value
Enter the Integer : -5
 The absolute value of -5 = |5|

Quadrant of a point
Enter the X and Y co-ordinates :
2
-5
The point (2,-5) lies in 4th Quadrant

month name
Enter the month number(1-12) : 13
Enter a valid month number (1-12)

Unique clock representation
Enter number of seconds : 920458
255 :40 :58

Divisible 3 numbers
Enter three numbers :
7
4
2
Non-Divisible

Leap year
Enter the year : 2020
2020 is a leap year

//next day on calendar
Enter the day : 26
Enter the month : 5
Enter the year : 2020
The next day is 27 / 5 / 2020

*/
