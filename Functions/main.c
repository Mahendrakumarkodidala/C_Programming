#include <stdio.h>
#include <stdlib.h>
float avg(int,int,int);
int main()
{
    //Exercises to understand different function types

    print();

    int a, b;
    printf("Enter n1 : ");
    scanf("%d",&a);
    printf("Enter n2 : ");
    scanf("%d",&b);
    printMaxMin(a, b);

    printf("The maximum among three is %d\n",Max());

    int x,y,z;
    printf("Enter n1 : ");
    scanf("%d",&x);
    printf("Enter n2 : ");
    scanf("%d",&y);
    printf("Enter n3 : ");
    scanf("%d",&y);
    printf("The avg of three is %f\n",avg(x,y,z));

    return 0;
}

//Ex-1 No parameters, No Return
void print()
{
    printf("Hello\n");
}

//Ex-2 parameters, No Return
void printMaxMin(int n1, int n2)
{
    if(n1 > n2){
        printf("%d is Maximum\n", n1);
        printf("%d is Minimum\n", n2);
    }
    else{
        printf("%d is Maximum\n", n2);
        printf("%d is Minimum\n", n1);
    }
}

//Ex-3 NO parameters, Return a value
int Max(){
    int n1,n2,n3;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);
    printf("Enter n3 : ");
    scanf("%d",&n3);

    if(n1 > n2)
        if(n1>n3)
            return n1;
        else
            return n3;
    else if(n2 > n3)
        return n2;
    else
        return n3;
}

//Ex-4 parameters, Return a value
float avg(int g1, int g2, int g3)
{
    float avge;
    avge = (g1+g2+g3) / 3.0;
    return avge;
}
