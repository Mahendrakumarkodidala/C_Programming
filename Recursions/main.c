#include <stdio.h>
#include <stdlib.h>

/*
//Sum of AP Series
int ArtProg(int num)
{
    if(num==1)
        return 1;

    return num + ArtProg(num-1);
}
*/


/*
//Factorial
int Fact(int num)
{
    if(num<=1)
        return 1;

    return num * Fact(num-1);
}
*/


/*
//Fibonacci Series
int Fib(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return Fib(n-1) + Fib(n-2);
}
*/


/*
//Sum of digits in a number
int SumDig(int num)
{
    int digit = num % 10;
    int quotient = num / 10;

    if(num <= 9)
        return num;

    return digit + SumDig(quotient);
}
*/



//Count of digits
int NumDig(int num)
{
    if(num <= 9)
        return 1;

    return 1 + NumDig(num / 10);
}


int main()
{
    /*
    //Example-1 Sum of AP Series
    int num,sum=0;
    printf("Enter number : ");
    scanf("%d",&num);
    sum = ArtProg(num);
    printf("Result = %d\n",sum);
    */


    /*
    //Example-2 Factorial
    int num,factorial=0;
    printf("Enter number : ");
    scanf("%d",&num);
    factorial = Fact(num);
    printf("Result = %d\n",factorial);
    */


    /*
    //Challenge -1 Fibonacci Series
    int n,fib=0;
    printf("Enter number : ");
    scanf("%d",&n);
    fib = Fib(n);
    printf("Result = %d\n",fib);
    */


    /*
    //Challenge -2 Sum of digits in a number
    int num,sum=0;
    printf("Enter number : ");
    scanf("%d",&num);
    sum = SumDig(num);
    printf("sum of digits in %d = %d\n",num,sum);
    */



    //Challenge -3 Count of digits
    int num,n=0;
    printf("Enter number : ");
    scanf("%d",&num);
    n = NumDig(num);
    printf("No. of digits in %d = %d\n",num,n);


    return 0;
}
//OUTPUT

/*
//Sum of AP Series
Enter number : 5
Result = 15

//Factrorial
Enter number : 5
Result = 120

//Fibonacci Series
Enter number : 5
Result = 5

//Sum of digits in a number
Enter number : 9531
sum of digits in 9531 = 18

//Count of digits
Enter number : 9531
No. of digits in 9531 = 4

*/
