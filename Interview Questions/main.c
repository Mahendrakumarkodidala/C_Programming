#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    /*
    //Swap without 3rd variable
    int a=20,b=10;
    printf("Before Swap , a = %d & b = %d\n",a,b);
    a = a + b; //a=30 b = 10
    b = a - b; //a = 30 b= 20
    a = a - b;
    printf("After Swap , a = %d & b = %d\n",a,b);
    */

    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {6,7,8,9,10};
    printf("Before Swap a & b")
    for(int i=0;i<SIZE;i++){
        printf("%d ,"a[i];)
    }
    for(int i=0;i<SIZE;i++){
        printf("%d ,"b[i];)
    }





    return 0;
}

/*
//Swap without 3rd variable
Before Swap , a = 20 & b = 10
After Swap , a = 10 & b = 20








*/
