#include <stdio.h>
#include <stdlib.h>


/*
//Total Numbers Less than Num
int LessThanNum(int num)
{
    int input;
    printf("Enter the Sequence number : ");
    scanf("%d",&input);

    if(input == -1)
        return 0;

    if(input < num)
        return 1 + LessThanNum(num);

    return LessThanNum(num);
}
*/


/*
//Total No. of Character Occurrences
int NoChar(char character)
{
    char input;

    printf("Enter the Character for Sequence : ");
    scanf(" %c",&input);
    getchar();  // Used to avoid next newline

    if(input == '$')
        return 0;

    if(input == character)
        return 1 + NoChar(character);

    return NoChar(character);
}
*/


/*
//Total No. of Even numbers
int NumEven()
{
    int input;
    printf("Enter the Sequence number : ");
    scanf("%d",&input);

    if(input == -1)
        return 0;

    if(input % 2 == 0)
        return 1 + NumEven();

    return NumEven();
}
*/


/*
//Sum of Even Numbers
int SumEven()
{
    int input;
    printf("Enter the Sequence number : ");
    scanf("%d",&input);

    if(input == -1)
        return 0;

    if(input % 2 == 0)
        return input + SumEven();

    return SumEven();
}
*/


/*
//Print 1toN & Nto1
void Print1toN(int n)
{
    if(n >= 1){
        Print1toN(n-1);
        printf("%d ",n);
    }
}
void PrintNto1(int n)
{
    if(n >= 1){
        printf("%d ",n);
        PrintNto1(n-1);
    }
}
*/


/*
//Print 1toN, Nto1 with only one 1
void PrintNtoN(int n)
{
    if(n == 1)
        printf("%d ",n);

    if(n > 1){
        printf("%d ",n);
        PrintNtoN(n-1);
        printf("%d ",n);
    }
}
*/


/*
//Lucas Sequence
int Lucas(int n)
{
    if(n==0)
        return 2;

    if(n==1)
        return 1;

    return Lucas(n-1)+Lucas(n-2);
}
int LucasNR(int n)
{
    int prev = 2, cur = 1;

    if(n==0)
        return 2;

    if(n==1)
        return 1;

    int temp;
    for(int i=2; i<=n; i++){
            temp = prev + cur;
            prev = cur;
            cur = temp;
    }

    return cur;
}
*/


/*
//Max Value in a Sequence
int Max(int num)
{
    int input, max;
    printf("Enter the Sequence number : ");
    scanf("%d",&input);

    if(num > 1){
        max = Max(num-1);
        if(input > max)
            return input;
        else
            return max;
    }
    return input;
}
*/


/*
//Min Value in a Sequence
int Min(int num)
{
    int input, min;
    printf("Enter the Sequence number : ");
    scanf("%d",&input);

    if(num > 1){
        min = Min(num-1);
        if(input < min)
            return input;
        else
            return min;
    }
    return input;
}
*/


/*
//Pell Srquence
int PellNumbers(int num)
{
    if(num==0)
        return 0;

    if(num==1)
        return 1;

    return 2 * PellNumbers(num - 1) + PellNumbers(num - 2);
}
int PellNumbersNR(int num)
{
    int prev = 0;
    int cur = 1;

    if(num==0)
        return 0;

    if(num==1)
        return 1;

    int temp;
    for(int i=2; i<=num; i++){
            temp = 2 * cur + prev;
            prev = cur;
            cur = temp;
    }
    return cur;
}
*/


/*
//Is Sum of digits Even?
int EvenSum(int num)
{
    int sum=0;
    if(num<=9)
        sum = sum + num;
    else
        sum = sum + num % 10 + EvenSum(num/10);

    if(sum%2==0)
        return 1;
    else
        return 0;
}
*/


/*
//Is Sum of digits Odd?
int OddSum(int num)
{
    int sum=0;
    if(num<=9)
        sum = sum + num;
    else
        sum = sum + num % 10 + OddSum(num/10);

    if(sum%2!=0)
        return 1;
    else
        return 0;
}
*/


/*
//Odd Even Positions
int OddEvenPosition(int n)
{
    if(n < 10)
        if(n%2 == 0)
            return 1;
        else
            return 0;

    if(n < 100)
        if(n % 10 % 2 == 0 && n / 10 % 2 == 1)
            return 1;
        else
            return 0;

    if((n % 10 % 2 == 0) && (n / 10 % 10 % 2 == 1))
        return OddEvenPosition(n / 100);
    else
        return 0;

}
*/


/*
//Extra Recursion #1
void PrintSeq (int total, int num1, int num2)
{
    if(total>0){
        printf("%d",num1);
        PrintSeq (total-1,num1,num2);
        printf("%d",num2);
    }
}
*/


/*
//Extra Recursion #2
void PrintSeqC (int total, char c1, char c2)
{
    if(total>0){
        printf("%c",c1);
        PrintSeqC (total-1,c1,c2);
        printf("%c",c2);
        printf("%c",c2);
    }
}
*/


/*
//Extra Recursion #3
void PrintSeqC (int total, char c1)
{
    if(total>0){
        printf("%c",c1);
        PrintSeqC (total-1,c1);
        printf("%c",c1 + 'A' - 'a');
    }
}
*/



/*
//Extra Recursion #4
int AscDes(int num)
{
    int flag,units = num%10, tens = (num/10)%10;

    if(num < 100)
        if(tens < units)
            return 1;
        else
            return -1;

    flag = AscDes(num / 10);

    if(flag == 1 && tens < units)
        return 1;
     if(flag == -1 && tens > units)
        return -1;

    return 0;
}
*/



//Extra Recursion #5
int Digit(int num, int digit)
{
    int count;
    if(num<10)
        if(num != digit)
            return 1;
        else
            return 0;
    count = Digit(num/10,digit);

    if(count==1)
        if(num % 10 == digit)
            return 0;
        else
            return 1;
    else
        if(num%10==digit)
            return 1;
        else
            return 0;
}



int main()
{
    /*
    //Total Numbers Less than Num
    int num,count;
    printf("Enter the number : ");
    scanf("%d",&num);
    count = LessThanNum(num);
    printf("Total numbers less than %d = %d\n",num,count);
    */


    /*
    //Total No. of Character Occurrences
    char c;
    int count;
    printf("Enter the Character to Count : ");
    scanf("%c",&c);
    count = NoChar(c);
    printf("Total number of occurrences of %c = %d\n",c,count);
    */


    /*
    //Total No. of Even numbers
    int count;
    count = NumEven();
    printf("Total Even Numbers = %d\n",count);
    */


    /*
    //Sum of Even Numbers
    int sum;
    sum = SumEven();
    printf("Sum of Even Numbers = %d\n",sum);
    */


    /*
    //Print 1toN & Nto1
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    Print1toN(n);
    printf("\n");
    PrintNto1(n);
    */


    /*
    //Print 1toN, Nto1 with only one 1
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    PrintNtoN(n);
    */


    /*
    //Lucas Sequence
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Lucas Sequence value at index %d = %d\n",n,Lucas(n));
    printf("LucasNR Sequence value at index %d = %d\n",n,LucasNR(n));
    */


    /*
    //Max Value in a Sequence
    int num;
    printf("Enter the value for Sequence : ");
    scanf("%d",&num);
    printf("Maximum value in sequence = %d\n",Max(num));
    */


    /*
    //Max Value in a Sequence
    int num;
    printf("Enter the value for Sequence : ");
    scanf("%d",&num);
    printf("Minimum value in sequence = %d\n",Min(num));
    */


    /*
    //Pell Sequence
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Pell Sequence value at index %d = %d\n",n,PellNumbers(n));
    printf("PellNR Sequence value at index %d = %d\n",n,PellNumbersNR(n));
    */


    /*
    //Is Sum of digits Even?
    int num,result;
    printf("Enter the number : ");
    scanf("%d",&num);
    result=EvenSum(num);
    if(result==1)
        printf("The Sum of digits in %d is Even\n",num);
    else
         printf("The Sum of digits in %d is NOT Even\n",num);
    */


    /*
    //Is Sum of digits Odd?
    int num,result;
    printf("Enter the number : ");
    scanf("%d",&num);
    result=OddSum(num);
    if(result==1)
        printf("The Sum of digits in %d is Odd\n",num);
    else
         printf("The Sum of digits in %d is NOT Odd\n",num);
     */


    /*
    //Odd Even Positions
    int num,result;
    printf("Enter the number : ");
    scanf("%d",&num);
    result=OddEvenPosition(num);
    if(result==1)
        printf("The digits in %d are in correct position.\n",num);
    else
         printf("The digits in %d are NOT in correct position.\n",num);
    */



    /*
    //Extra Recursion #1
    int num1,num2,total;
    printf("Enter the total : ");
    scanf("%d",&total);
    printf("Enter the number1 : ");
    scanf("%d",&num1);
    printf("Enter the number2 : ");
    scanf("%d",&num2);
    PrintSeq (total,num1,num2);
    */


    /*
    //Extra Recursion #2
    int total;
    char c1,c2;
    PrintSeqC (3,'a','b');
    */


    /*
    //Extra Recursion #3
    PrintSeqC (3,'a');
    */


    /*
    //Extra Recursion #4
    int num,Result;
    printf("Enter the value : ");
    scanf("%d",&num);
    Result = AscDes(num);
    printf("Result of %d = %d\n",num,Result);
    */



    //Extra Recursion #5
    int num,digit,Result;
    printf("Enter the value : ");
    scanf("%d",&num);
    printf("Enter the digit : ");
    scanf("%d",&digit);
    Result = Digit(num,digit);
    printf("Result of %d = %d\n",num,Result);



    return 0;
}

//OUTPUT

/*

//Total Numbers Less than Num
Enter the number : 4
Enter the Sequence number : 1
Enter the Sequence number : 3
Enter the Sequence number : 5
Enter the Sequence number : 6
Enter the Sequence number : 1
Enter the Sequence number : -1
Total numbers less than 4 = 3

//Total No. of Character Occurrences
Enter the Character to Count : a
Enter the Character for Sequence : a
Enter the Character for Sequence : b
Enter the Character for Sequence : c
Enter the Character for Sequence : d
Enter the Character for Sequence : a
Enter the Character for Sequence : f
Enter the Character for Sequence : g
Enter the Character for Sequence : h
Enter the Character for Sequence : $
Total number of occurrences of a = 2


//Total No. of Even numbers
Enter the Sequence number : 1
Enter the Sequence number : 3
Enter the Sequence number : 4
Enter the Sequence number : 6
Enter the Sequence number : -1
Total Even Numbers = 2

//Sum of Even Numbers
Enter the Sequence number : 1
Enter the Sequence number : 3
Enter the Sequence number : 4
Enter the Sequence number : 6
Enter the Sequence number : -1
Sum of Even Numbers = 10

//Print 1toN & Nto1
Enter the number : 4
1 2 3 4
4 3 2 1

//Print 1toN, Nto1 with only one 1
Enter the number : 4
4 3 2 1 2 3 4

//Lucas Sequence
Enter the number : 4
Lucas Sequence value at index 4 = 7
LucasNR Sequence value at index 4 = 7

//Max Value in a Sequence
Enter the value for Sequence : 3
Enter the Sequence number : 1
Enter the Sequence number : 3
Enter the Sequence number : 2
Maximum value in sequence = 3

//Min Value in a Sequence
Enter the value for Sequence : 3
Enter the Sequence number : 1
Enter the Sequence number : 3
Enter the Sequence number : 2
Minimum value in sequence = 1

//Pell Sequence
Enter the number : 3
Pell Sequence value at index 3 = 5
PellNR Sequence value at index 3 = 5

//Is Sum of digits Even?
Enter the number : 36859
The Sum of digits in 36859 is NOT Even

//Is Sum of digits Odd?
Enter the number : 36859
The Sum of digits in 36859 is Odd

//Odd Even Positions
Enter the number : 35864
The digits in 35864 are NOT in correct position.

//Extra Recursion #1
Enter the total : 2
Enter the number1 : 3
Enter the number2 : 5
3355

//Extra Recursion #2
aaabbbbbb

//Extra Recursion #3
aaaAAA

//Extra Recursion #4
Enter the value : 9643
Result of 9643 = -1

//Extra Recursion #5
Enter the value : 124
Enter the digit : 2
Result of 124 = 0

*/
