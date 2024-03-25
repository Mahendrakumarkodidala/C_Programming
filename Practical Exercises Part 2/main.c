#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    //Nth term of Arithmetic Sequence
    float a1,d;
    int n;
    printf("Enter the Initial Term (a1) : ");
    scanf("%f",&a1);
    printf("Enter number of terms in sequence (n) : ");
    scanf("%d",&n);
    printf("Enter the difference (d) : ");
    scanf("%f",&d);
    printf("The n-th term is %f\n", a1+(n-1)*d);
    */

    /*
    //Sum of Arithmetic Sequence
    float a1,d, an;
    int n;
    printf("Enter the Initial Term (a1) : ");
    scanf("%f",&a1);
    printf("Enter number of terms in sequence (n) : ");
    scanf("%d",&n);
    printf("Enter n-th element (an) : ");
    scanf("%f",&an);
    printf("The sum of thew sequence is %.2f\n", (a1 + an)* n/2);
    */

    /*
    //Employee Salary Calculator
    float salary, hours;
    printf("Enter the Salary per hour : ");
    scanf("%f",&salary);
    printf("Enter total hours worked in a month : ");
    scanf("%f",&hours);
    printf("Total monthly salary = %.2f\n",salary * hours);
    */

    /*
    //Driving Time
    int d,s;
    printf("Enter the distance [KM] between A & B : ");
    scanf("%d",&d);
    printf("Enter the speed [KM/H] : ");
    scanf("%d",&s);
    int hours = d/s;
    float sm = s/60.0;
    float min = (d % s) / sm;
    printf("The time taken for car to reach B from A will take %d hours and %.2f minutes\n",hours,min);
    */

    /*
    //Seconds into Timestamp
    int h,m,s,rs;
    printf("Enter number of seconds : ");
    scanf("%d",&s);
    h = s/3600;
    m = (s - h * 3600) / 60;
    rs = (s - h * 3600) % 60;
    printf("Timestamp = %d:%d:%d\n",h,m,rs);
    */

    /*
    //Decimal Part
    float data,decimal;
    printf("Enter the data : ");
    scanf("%f",&data);
    decimal = data - (int)data;
    printf("The decimal part of the data = %.2f\n",decimal);
    */

    /*
    //Sum of triple digits
    int num,h,t,u;
    printf("Enter the number : ");
    scanf("%d",&num);
    h = num / 100;
    t = (num % 100) / 10;
    u = num % 10;
    printf("The sum of the digits in number = %d\n",h+t+u);
    */

    /*
    //Print Reversed number
    int num,h,t,u;
    printf("Enter the number : ");
    scanf("%d",&num);
    u = num % 10;
    h = num / 100;
    t = (num % 100) / 10;
    printf("The Reversed number of %d is %d%d%d\n",num,u,t,h);
    */

    /*
    //Distance between two points
    float x1,x2,y1,y2;
    printf("Enter first co-ordinates (X1,Y1) : ");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Enter second co-ordinates (X2,Y2) : ");
    scanf("%f",&x2);
    scanf("%f",&y2);
    float d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("The distance between two points = %.2f\n",d);
    */


    //Efficient Calculation
    int x,x2,x4,x6,x8;
    printf("Enter x : ");
    scanf("%d",&x);
    x2 = x * x;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;
    printf(" X^2 = %d\n X^4 = %d\n X^6 = %d\n X^8 = %d\n",x2,x4,x6,x8);

    return 0;
}

/*
Nth term of Arithmetic Sequence
n-th term is 17

Sum of Arithmetic Sequence
Enter the Initial Term (a1) : 1
Enter number of terms in sequence (n) : 9
Enter n-th element (an) : 17
The sum of thew sequence is 81.00

Employee Salary Calculator
Enter the Salary per hour : 50
Enter total hours worked in a month : 80
Total monthly salary = 4000.00

Driving Time
Enter the distance [KM] between A & B : 300
Enter the speed [KM/H] : 80
The time taken for car to reach B from A will take 3 hours and 45.00 minutes

Seconds into Timestamp
Enter number of seconds : 4000
Timestamp = 1:6:40

Decimal Part
Enter the data : 12.7
The decimal part of the data = 0.70

Sum of triple digits
Enter the number : 531
The sum of the digits in number = 9

Print Reversed number
Enter the number : 531
The Reversed number of 531 is 135

Distance between two points
Enter first co-ordinates (X1,Y1) : 1
3
Enter second co-ordinates (X2,Y2) : 4
7
The distance between two points = 5.00

Efficient Calculation
Enter x : 2
 X^2 = 4
 X^4 = 16
 X^6 = 64
 X^8 = 256
*/
