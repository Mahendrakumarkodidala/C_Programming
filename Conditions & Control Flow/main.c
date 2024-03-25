#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Challenge 1
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num % 2 == 0)
        printf("%d is an even number \n",num);
    else
        printf("%d is an odd number \n",num);
    */

    /*
    //challenge 2
    float num1,num2;
    printf("Enter num1, num2 : \n");
    scanf("%f%f",&num1,&num2);
    if (num1 > num2)
        printf("Maximum = %.2f \nMinimum = %.2f\n",num1,num2);
    else
        printf("Maximum = %.2f \nMinimum = %.2f\n",num2,num1);
    */

    /*
    //challenge 3
    int a,b,c;
    int max,min;
    printf("Enter num1,num2,num3 : \n");
    scanf("%d%d%d",&a,&b,&c);
    max = a;
    min = b;

    if(a < b){
         max = b;
         min = a;
    }
    if (max < c)
        max = c;
    if (min > c)
        min = c;
    printf("Maximum = %d \nMinimum = %d\n",max,min);
    */

    /*
    //Milestone
    char sign;
    float n1,n2;

    printf("Enter the operation : \n");
    scanf("%c",&sign);
    printf("Enter two numbers n1,n2 : \n");
    scanf("%f%f",&n1,&n2);

    switch (sign){
        case '+':
            printf("The addition of %.2f and %.2f = %.2f\n",n1,n2,n1+n2);
            break;
        case '-':
            printf("The subtraction of %.2f and %.2f = %.2f\n",n1,n2,n1-n2);
            break;
        case '*':
            printf("The multiplication of %.2f and %.2f = %.2f\n",n1,n2,n1*n2);
            break;
        case '/':
            if (n2 == 0)
                printf("Divison by zero is not possible\n");
            else
                printf("The divison of %.2f and %.2f = %.2f\n",n1,n2,n1/n2);
            break;
        case '%':
            printf("The remainder of %.2f and %.2f = %.2f\n",n1,n2,(int)n1%(int)n2);
            break;
        default:
            printf("Enter valid Operation");
            break;
    }
    */


    //Assignment - 3
    /*
    //1Q
    int num1,num2;
    printf("Enter num1,num2 : \n");
    scanf("%d%d",&num1,&num2);

    if(num1 == num2)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
     */

    /*
    //2Q
    int num1,num2,num3;
    printf("Enter num1,num2,num3 : \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1 == num2 && num1 == num3)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    */

    /*
    //3Q
    int num;
    int h,t,u;
    printf("Enter num : ");
    scanf("%d",&num);

    h = num / 100;
    t = (num / 10) % 10;
    u = num % 10;

    if(h < t && t < u)
        printf("ASCENDING\n");
    else
        printf("NOT ASCENDING\n");
    */


    //4Q
    int num;
    int h,t,u;
    printf("Enter num : ");
    scanf("%d",&num);

    if(num < 0)
        printf("-1\n");
     else if(num > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}

/*
Output

challenge 1
Enter the number : 10
10 is an even number

challenge 2
Enter num1,num2 :
3.5
5.2
Maximum = 5.20
Minimum = 3.50

challenge 3
Enter num1,num2,num3 :
5
3
7
Maximum = 7
Minimum = 3

Milestone
Enter the operation :
/
Enter two numbers n1,n2 :
5
0
Divison by zero is not possible


*/
