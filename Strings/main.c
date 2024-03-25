#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

/*
int StringLength(char *str)
{
    int count=0,i=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}
*/



int main()
{
    /*
    //Challenge #1
    char str1[] = "Mahendra Kodidala";

    int i=0;
    while (str1[i] != '\0')
    {
       printf("%c",str1[i]);
       i++;
    }
    */

    /*
    //Challenge #2
    char str[SIZE];
    printf("Enter the String : ");
    gets(str);
    printf("The length of the string = %d\n",StringLength(str));
    */


    /*
    //Challenge #3
    char str[100],count=0;
    printf("Enter the String : ");
    gets(str);
    int i=0;
    while(str[i] != '\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    if(count==0)
        count=0;
    else
        count=count+1;
    printf("The number of words in %s is %d\n",str,count);
    */



    //Milestone 1
    char str[100];
    int flag=0, len;
    printf("Enter the String : ");
    gets(str);
    len = strlen(str);
    for(int i=0; i<len/2; i++){
        if(str[i]== str[len-1-i])
            flag=1;
    }
    if(flag==1)
        printf("%s is a palindrome\n",str);
    else
        printf("%s is NOT a palindrome\n",str);

    return 0;
}
//OUTPUT

//Challenge #1
//Mahendra Kodidala

/*
//Challenge #2
Enter the String : Mahendra
The length of the string = 8
*/

/*
//Milestone 1
Enter the String : wow
wow is a palindrome
*/
