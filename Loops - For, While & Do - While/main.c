#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Challenge 1
    int count = 0,total;
    printf("Enter the count of Asterisks : ");
    scanf("%d",&total);

    while(count < total){ // (total>0)
        printf("*");
        count++;
    }
    printf("\n");
    */

    /*
    //Challenge 2
    int pow,tpow,num,tot = 1;
    printf("Enter the number : ");
    scanf("%d",&num);
     printf("Enter the power : ");
    scanf("%d",&pow);
    tpow = pow;
    while(pow > 0){ // (total>0)
        tot = tot * num;
        pow--;
    }
    printf("%d power of %d = %d\n",num,tpow,tot);
    */

    /*
    //Milestone 1
    int subs = 0;
    float score,total = 0.0 ,average = 0.0;
     printf("Enter the score or '-1' to stop: ");
        scanf("%f",&score);

    while(score!=-1){
        total = total + score;
        subs++;
        printf("Enter the score or '-1' to stop: ");
        scanf("%f",&score);

    }
    printf("The number of subjects = %d\n",subs);
    average = total / subs;
    if(subs!=0)
        printf("The Average of %d subjects = %.2f\n",subs,average);
    */

    /*
    //Challenge 3
    int num;
    do{
        printf("Enter the grade between 0 - 100: ");
        scanf("%d",&num);
    }while(num <= 0 || num >= 100);
    printf("Thanks you have inserted %d, which is a legit grade\n ",num);
    */

    /*
    //Challenge 4
    int pow,num,tot=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&pow);

    for(int i=1; i <= pow; i++){
        tot = tot * num;
    }
    printf("%d power of %d = %d\n",num,pow,tot);
    */

    /*
    //Challenge 5
    for(int i=1; i<=1000; i++){
        printf("%d. I am sorry for not listening to my teacher\n",i);
    }
    */

    /*
    //EX - 1 Nested loops
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    */

    /*
    //EX - 2 Nested loops
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    */

    //Milestone - 2 million dollars
    float tot = 0.01;
    int q_sum = 1000000;

    for(int i=1; i <= 30; i++){
        tot = tot * 2;
    }
    if(tot > q_sum)
        printf("1 cent every day for 30 days = %f",tot);
    else
        printf("Quicksum : %d\n",q_sum);

    return 0;
}

/*

Challenge 1
Enter the count of Asterisks : 5
*****

Challenge 2
Enter the number : 5
Enter the power : 3
5 power of 3 = 125

Milestone 1
Enter the score or '-1' to stop: 96.4
Enter the score or '-1' to stop: 98.2
Enter the score or '-1' to stop: 95.9
Enter the score or '-1' to stop: -1
The number of subjects = 3
The Average of 3 subjects = 96.83

Challenge 3
Enter the grade between 0 - 100: -5
Enter the grade between 0 - 100: 103
Enter the grade between 0 - 100: 85
Thanks you have inserted 85, which is a legit grade

Challenge 4
Enter the number : 5
Enter the power : 3
5 power of 3 = 125

EX - 1 Nested loops
Enter an integer : 5
1
12
123
1234
12345

EX - 2 Nested loops
Enter an integer : 5
1
22
333
4444
55555

*/
