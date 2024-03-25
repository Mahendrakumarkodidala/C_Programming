#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    // 1 to num & vice versa

    int num;
    printf("Enter a num : ");
    scanf("%d",&num);

    for(int i=1; i<= num; i++){
        printf("%d, ",i);
    }
    printf("\n");
    for(; num>0; num--){
        printf("%d, ",num);
    }
    printf("\n");
    */



    /*
    // sum of 1 to num

    int num,sum = 0;
    printf("Enter a num : ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    printf("The sum of numbers from 1 to %d = %d\n",num,sum);
    */



    /*
    //Multiplication of a table

    int num,freq;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a frequency : ");
    scanf("%d",&freq);

    for (int i=1; i<=freq; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    */


    /*
    //Print n even natural numbers

    int num;
    printf("Enter a num : ");
    scanf("%d",&num);
        //Method 1
    for(int i=1; i<=num; i++){
        if(i%2==0)
            printf("%d, ",i);
    }
    printf("\n");
        //Method 2
    for(int i=2; i<=num; i=i+2){
        printf("%d, ",i);
    }
    printf("\n");
    */


    /*
    // Pyramid of numbers
    int n,spaces,value=1;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    spaces = n-1;
    for(int i=1; i<=n; i++){
        for(int j=spaces; j>=1; j--){
            printf(" ");
        }
         for(int k=1; k<=i; k++){
            printf("%d ",value);
            value++;
        }
        printf("\n");
        spaces--;
    }
    */

    /*
    // Sum of values divisible by 3 & 5
    int num,sum=0;
    printf("Enter a num : ");
    scanf("%d",&num);
        //Trivial Solution
    for(int i=1; i<=num; i++){
        if(i%3==0 && i%5==0)
            sum=sum+i;
    }
    printf("Sum of numbers divisible by 3 and 5 upto %d = %d\n",num,sum);

        //Optimized Solution
    for(int i=15; i<=num; i=i+15){
            sum=sum+i;
    }
    printf("Sum of numbers divisible by 3 and 5 upto %d = %d\n",num,sum);
    */

    /*
    // Sum of values divisible by 3 | 5
    int num,sum=0;
    printf("Enter a num : ");
    scanf("%d",&num);
        //Trivial Solution
    for(int i=1; i<=num; i++){
       if(i%3==0 || i%5==0)
            printf("%d is divisible by 3 | 5\n",i);
            //sum=sum+i;
    }
    printf("Trivial Sum of numbers divisible by 3 or 5 up to %d = %d\n\n",num,sum);

        //Optimized Solution
    for(int i=3; i<=num; i=i+3){
            sum=sum+i;
    }

    for(int i=5; i<=num; i=i+5){
            if(i%3!=0)
                sum=sum+i;
    }
    printf("Optimized Sum of numbers divisible by 3 or 5 up to %d = %d\n\n",num,sum);
    */


    /*
    // Very Ascending or Not
    int size,prevalue = 0, curvalue = 0, ascflag = 1;

    do{
        printf("Enter size : ");
        scanf("%d",&size);

    }while(size <= 0);

        do {
            printf("Enter a value : ");
            scanf("%d",&curvalue);

            if(curvalue<0)
                printf("Try Again\n");
            else{
                if(curvalue <= prevalue){
                    ascflag=0;
                    break;
                }
                prevalue = curvalue;
                size--;
            }
        }while(size>0);

     if(ascflag == 1)
            printf("Very Ascending\n");
     else
         printf("Not Very Ascending\n");
    */



    /*
    // Subtracting EvenDigitSum and OddDigitSum
    int num, eds=0, ods=0, curdigit;
    printf("Enter a num : ");
    scanf("%d",&num);

    while(num>0){
        curdigit = num % 10;
        if(curdigit % 2 ==0)
            eds += curdigit;
        else
            ods += curdigit;
        num = num / 10;
    }
    printf("EvenDigitSum - OddDigitSum = %d\n",eds-ods);
    */

    // Sum of Odd Numbers Sequence
    int num,ods = 0,digit;
    printf("Enter a num : ");
    scanf("%d",&num);

    while(num>0){
        printf("Enter a value : ");
        scanf("%d",&digit);
        if(digit % 2 == 1)
            ods = ods + digit;
        num--;
    }
    printf("Sum of Odd Numbers Sequence = %d\n",ods);

    return 0;
}

/*
1 to num & vice versa
Enter a num : 10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
10, 9, 8, 7, 6, 5, 4, 3, 2, 1,

sum of 1 to num
Enter a num : 10
The sum of numbers from 1 to 10 = 55

Multiplication of a table
Enter a number : 3
Enter a frequency : 10
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30


Enter a num : 10
2, 4, 6, 8, 10,
2, 4, 6, 8, 10,

Pyramid of numbers
Enter number of rows : 5
    1
   2 3
  4 5 6
 7 8 9 10
11 12 13 14 15

Sum of values divisible by 3 | 5
Enter a num : 100
Optimized Sum of numbers divisible by 3 or 5 up to 100 = 2418

Very Ascending or Not
Enter size : 5
Enter a value : 1
Enter a value : 3
Enter a value : 2
Enter a value : 4
Enter a value : 6
Not Very Ascending

Subtracting EvenDigitSum and OddDigitSum
Enter a num : 7452
EvenDigitSum - OddDigitSum = -6

Sum of Odd Numbers Sequence
Enter a num : 5
Enter a value : 1
Enter a value : 2
Enter a value : 3
Enter a value : 4
Enter a value : 5
Sum of Odd Numbers Sequence = 9
*/
