#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Challenge #1

    int Current_year;
    int Age;

    scanf("%d",&Current_year);
    scanf("%d",&Age);

    printf("Birth Year = %d\n",Current_year - Age);

    */

    /*
    //Challenge #2

    double height,width;

    printf("Enter Height : ");
    scanf("%lf",&height);
    printf("Enter Width : ");
    scanf("%lf",&width);

    printf("Area of Rectangle = %lf\n",height * width);
    */

    /*
    //Assignment #1

    float height,width;

    printf("Enter Height : ");

    scanf("%f",&height);

    printf("Enter Width : ");

    scanf("%f",&width);

    printf("Perimeter of Rectangle = %.2f\n",2*(height + width));
    */

    /*
    //Challenge #3

    int g1,g2,g3;
    double avg;

    printf("Enter Grade 1 : ");
    scanf("%d",&g1);

    printf("Enter Grade 2 : ");
    scanf("%d",&g2);

    printf("Enter Grade 3 : ");
    scanf("%d",&g3);

    avg = (double)(g1+g2+g3)/3;
    printf("Average : %.2lf\n",avg);
    */

    /*
    //Milestone 2
    //Problem -1
    double c,f;

    printf("Enter Temperature in Celsius : ");
    scanf("%lf",&c);
    f = c * 1.8 + 32;
    printf("Temperature in Fahrenheit : %.2lf F\n",f);
    */

    /*
    //Milestone 2
    //Problem -2
    double c,f;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%lf",&f);
    c = (f - 32)/ 1.8;
    printf("Temperature in Celsius : %.2lf C\n",c);
    */

    //Assignment 2 SWAP

   double n1,n2,temp;
   printf("Enter n1 & n2 : ");
   scanf("%lf%lf",&n1,&n2);
   printf("Before swapping n1 = %.2lf and n2 = %.2lf\n",n1,n2);
   temp = n1;
   n1 = n2;
   n2 = temp;
   printf("After swapping n1 = %.2lf and n2 = %.2lf\n",n1,n2);

    return 0;
}

/*output

Challenge #1
2023
23
Birth Year = 2000

Challenge #2
Enter Height :10
Enter Width :20
Area of Rectangle = 200

Assignment #1
Enter Height : 3.5
Enter Width : 2.5
Perimeter of Rectangle = 12.00

Challenge #3
Enter Grade 1 : 80
Enter Grade 2 : 60
Enter Grade 3 : 75
Average : 71.666667

Milestone 2
Problem -1
Enter Temperature in Celsius : 32
Temperature in Fahrenheit : 89.60 F
Problem -2
Enter Temperature in Fahrenheit : 49
Temperature in Celsius : 9.44 C

*/
