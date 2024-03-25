#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    /*
    //Basic Exercise - 1
    int arr[SIZE] = {0,5,4,2,1,3,2,0};
    int countArr[6] = {0};
    for (int i = 0; i < SIZE; i++){
        countArr[arr[i]]++;
    }

    for (int i = 0; i < 6; i++){
        printf("%d's count = %d\n",i,countArr[i]);
    }
    */


    /*
    //Basic Exercise - 2
    int arr[SIZE] = {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int countArr[10] = {0};
    for (int i = 0; i < SIZE; i++){
        countArr[arr[i]]++;
    }
    int max = countArr[0],index;

    for (int i = 0; i < 10; i++){
            if(countArr[i]>max)
            {
               max= countArr[i];
               index = i;
            }
    }
    printf("The value of %d appeared most of the times. Total %d appearances\n",index,max);
    */


    /*
    //Basic Exercise - 2
    int arr[SIZE] = {7,5,6,9,6,7,10,7};
    int countArr[8] = {0};
    for (int i = 0; i < SIZE; i++){
        countArr[arr[i] - 5]++;
    }
    int max = countArr[0],index;
    for (int i = 0; i < 8; i++){
            if(countArr[i]>max)
            {
               max= countArr[i];
               index = i;
            }
    }
    printf("The value of %d appeared most of the times. Total %d appearances\n",index+5,max);
    */


    /*
    //Exercise - 1
    char arr[SIZE] = {'k','i','b','r','c','k','z','m'};
    int countArr[26] = {0};
    for (int i = 0; i < SIZE; i++){
        countArr[arr[i] - 'a']++;
    }
    int max = countArr[0],index;
    for (int i = 0; i < 26; i++){
            if(countArr[i]>max)
            {
               max= countArr[i];
               index = i;
            }
    }
    printf("The value of %c appeared most of the times. Total %d appearances\n",index+'a',max);
    */


    /*
    //Exercise - 2
    char arr[SIZE] = {'K','I','B','R','C','K','Z','M'};
    int countArr[26] = {0};
    for (int i = 0; i < SIZE; i++){
        countArr[arr[i] -'A']++;
    }
    int max = countArr[0],index;
    for (int i = 0; i < 26; i++){
            if(countArr[i]>max)
            {
               max= countArr[i];
               index = i;
            }
    }
    printf("The value of %c appeared most of the times. Total %d appearances\n",index+'A',max);
    */




    //Exercise - 3
    char arr[SIZE] = {'K','O','c','R','C',' ','K','r'};
    int countArr[52] = {0};
    for (int i = 0; i < SIZE; i++){
            if(arr[i]>='a' && arr[i]<='z')
                countArr[arr[i] -'a']++;
            else if(arr[i]>='A' && arr[i]<='Z')
                countArr[arr[i] -'A'+26]++;
    }
    int max = countArr[0],index;
    for (int i = 0; i < 52; i++){
            if(countArr[i]>max)
            {
               max= countArr[i];
               index = i;
            }
    }
    if(index < 26)
        printf("The value of %c appeared most of the times. Total %d appearances\n",index+'a',max);
    else
        printf("The value of %c appeared most of the times. Total %d appearances\n",index-26+'A',max);





    return 0;
}

//OUTPUT

/*
//Basic Exercise - 1
0's count = 2
1's count = 1
2's count = 2
3's count = 1
4's count = 1
5's count = 1

//Basic Exercise - 2
The value of 5 appeared most of the times. Total 6 appearances

//Basic Exercise - 3
The value of 7 appeared most of the times. Total 3 appearances

//Exercise - 1
The value of k appeared most of the times. Total 2 appearances

//Exercise - 2
The value of K appeared most of the times. Total 2 appearances

//Exercise - 3
The value of K appeared most of the times. Total 2 appearances






*/
