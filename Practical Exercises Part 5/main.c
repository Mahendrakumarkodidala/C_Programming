#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
//Area of the rectangle
float AreaofRect(float h, float w)
{
    return h*w;
}
*/



/*
//Maximum Digit of 2 numbers
void MaximumDigit(int num)
{
    int d1,d2;
    printf("Enter a 2 digit number : ");
    scanf("%d",&num);

    if(num<10 || num>99)
        printf("Enter a valid number\n");
    else
    {
        if (num / 10>num % 10)
            printf("Maximum digit = %d\n",num / 10);
        else
            printf("Maximum digit = %d\n",num % 10);
    }
}
*/



/*
//Factorial
int Factorial(int num)
{
    int result = 1;
    if(num<0)
        return -1;

    for(int i=1; i<=num; i++){
            result = result * i;
        }

        return result;
}
*/



/*
//isEven
int isEven(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
*/



/*
//isOdd
int isOdd(int num)
{
    if(num%2==1)
        return 1;
    else
        return 0;
}
*/



/*
//Sequence of 9
long seq9(long len)
{
    long num = 0;
    if(len<=0)
        printf("Try Again\n");
    for (long i=1; i<=len; i++){
            num = num*10+9;
    }
    return num;
}
*/



/*
//Generation of Numbers
long GenNum(long len)
{
    long num=0;
    if(len<=0)
        printf("Try Again\n");
    else if(len <= 9){
        for(int i=1; i<=len; i++){
                num = num*10+i;
        }
        return num;
    }
    else{
        for(int i=1; i<=len; i++){
            num = num*10+9;
        }
    }
}
*/


/*
//toLower
char toLower(char c)
{
    if(c>='A' && c<='Z')
        return c-'A' + 'a';
    return -1;
}
*/


/*
//toUpper
char toUpper(char c)
{
    if(c>='a' && c<='z')
        return c +'A' - 'a';
    return -1;
}
*/


/*
//Charsto3Dig
int Charsto3Dig (char a,char b, char c )
{
    int h,t,u;
    int result;

    if (a >= '0' && a <= '9')
        h = a - '0';
    else
        return 0;

    if (b >= '0' && b <= '9')
        t = b - '0';
    else
        return 0;

    if (c >= '0' && c <= '9')
        u = c - '0';
    else
        return 0;

    result = h*100+t*10+u;

    return result;
}
*/


/*
//AmtAvg
float AmtAvg (int num, int digit)
{
    int val,count = 0,sum = 0;

    if(num < 0 )
        num = num * (-1);

    while (num != 0)
    {
        val = num % 10;

        if( val < digit)
        {
            count++;
            sum = sum + val;
        }

        num = num / 10;
    }

    printf("Total number of digits in %d less than %d = %d\n",num,digit,count);

    return (float)sum / count;
}
*/



/*
//Derivative
float Deriv(float c, float x, float n)
{
    float p = pow(x,(n - 1));
    int result = n * c * p;

    return result;
}
*/



/*
//SumOfDivisors - Trivial Solution
int SumOfDivisors(int num)
{
    int sum = 0;

    if(num == 1)
        return num;

    for(int i = 1; i <= num; i++){
        if(num % i ==0){
                printf("%d, ",i);
            sum = sum+i;
        }
    }
    printf("\n");
    return sum;
}
*/



/*
//OPtSumOfDivisors - Optimal Solution
int OptSumOfDivisors(int num)
{
    int i,sum = 1;

    if(num == 1)
        return num;

    for(int i = 2; i * i < num; i++){
        if(num % i ==0){
            printf("%d, ",i);
            sum = sum + i + num/i;
        }
    }
    if ( i * i == num)
        sum = sum + i;

    printf("\n");
    return sum+num;
}
*/



//PerfectNumbers
int PerfectNumber(int num)
{
    int i,sum = 1;

    if(num == 1)
        return num;

    for(int i = 2; i * i< num; i++){
        if(num % i ==0){
            sum = sum + i + num / i;
        }
    }
    if ( i * i == num)
        sum = sum + i;

    if(num == sum)
        return 1;
    else
        return 0;
}

int main()
{
    /*
    //Area of the rectangle
    float a,b;
    printf("Enter Height and Width of the Rectangle : \n");
    scanf("%f%f",&a,&b);
    printf("Area of Rectangle = %.2f\n",AreaofRect(a,b));
    */


    /*
    //Maximum Digit of 2 numbers
    int n;
    MaximumDigit(n);
    */


    /*
    //Factorial
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n",n,Factorial(n));
    */


    /*
    //isEven
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("isEven : %d\n",isEven(n));
    */


    /*
    //isOdd
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("isOdd : %d\n",isOdd(n));
    */


    /*
    //Sequence of 9
    long n;
    printf("Enter a Length : ");
    scanf("%ld",&n);
    printf("%ld\n",seq9(n));
    */


    /*
    //Generation of Numbers
    long n;
    printf("Enter a Length : ");
    scanf("%ld",&n);
    printf("%ld\n",GenNum(n));
    */

    /*
    //toLower
    char n;
    printf("Enter a Upper case Letter : ");
    scanf("%c",&n);
    printf("%c\n",tolower(n));
    */


    /*
    //toUpper
    char n;
    printf("Enter a Lower case Letter : ");
    scanf("%c",&n);
    printf("%c\n",toUpper(n));
    */


    /*
    //Charsto3Dig
    char a,b,c;
    printf("Enter three Characters : ");
    scanf("%c%c%c",&a,&b,&c);
    printf("Result : %d\n",Charsto3Dig(a,b,c));
    */



    /*
    //AmtAvg
    int num,digit;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the digit : ");
    scanf("%d",&digit);
    printf("Average = %.2f\n",AmtAvg(num,digit));
    */


    /*
    //Derivative
    int c,x,n;
    printf("Enter the Constant : ");
    scanf("%d",&c);
    printf("Enter the variable : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&n);
    printf("Result = %.2f\n",Deriv(c,x,n));
    */


    /*
    //SumOfDivisors - Trivial Solution
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Trivial Sum Of Divisors of %d = %d\n",num, SumOfDivisors(num));
    printf("Optimized Sum Of Divisors of %d = %d\n",num, OptSumOfDivisors(num));
    */



    //PerfectNumber
    int num,result;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(PerfectNumber(num) == 1)
        printf("%d is a perfect number\n",num);
    else
        printf("%d is not a perfect number\n",num);



    return 0;
}

/* OUTPUT
//Area of the rectangle
Enter Height and Width of the Rectangle :
5
10
Area of Rectangle = 50.00

//Maximum Digit of 2 numbers
Enter a 2 digit number : 98
Maximum digit = 9

//Factorial
Enter a number : 5
Factorial of 5 = 120

//isEven
Enter a number : 6
isEven : 1

//isOdd
Enter a number : 5
isOdd : 1

//Sequence of 9
Enter a Length : 9
999999999

//Generation of Numbers
Enter a Length : 9
123456789

//toLower
Enter a Upper case Letter : M
m

//toUpper
Enter a Lower case Letter : g
G

//Charsto3Dig
Enter three Characters : 1t2
Result : 0

//AmtAvg
Enter the number : 123123
Enter the digit : 3
Total number of digits in 0 less than 3 = 4
Average = 1.50

//Derivative
Enter the Constant : 4
Enter the variable : 2
Enter the power : 3
Result = 48.00

//SumOfDivisors - Trivial Solution
Enter the number : 12
1, 2, 3, 4, 6, 12,
Sum Of Divisors of 12 = 28

//SumOfDivisors - Optimal Solution
Enter the number : 12
1, 2, 3, 4, 6, 12,
Trivial Sum Of Divisors of 12 = 28
2, 3,
Optimized Sum Of Divisors of 12 = 28

//PerfectNumber
Enter the number : 16
16 is not a perfect number


*/
