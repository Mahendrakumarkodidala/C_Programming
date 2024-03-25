#include <stdio.h>
#include <stdlib.h>


//strlen
int strlrn(char *str)
{
    int i=0,count=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

//strcpy
char *strcpy (char *strDes, char *strSrc)
{

    int i=0;
    while(strSrc[i] != '\0'){
        strDes[i]=strSrc[i];
        i++;
    }
    strDes[i]='\0';

    return strDes;
}

//strcmp
int strcmp (char *str1, char *str2)
{
    int i=0, flag=0;
    while(flag==0){
        if(str1[i]<str2[i])
            flag = -1;
        else if (str1[i]>str2[i])
            flag = 1;

        if(str1[i] == '\0')
            break;

        i++;
    }

    return flag;
}




int main()
{
    //Challenge #1
    char str[100], str1[100];
    printf("Enter the String : ");
    gets(str);
    printf("The length of string %s = %d\n",str,strlen(str));


     //Challenge #2
     char *temp;
     temp = strcpy(str1,str);
     printf("Original = %s\n",str);
     printf("Copy = %s\n",temp);


     //Challenge #3
     int res = strcmp(str,str1);
     printf("The strcmp result is %d\n",res);


































    return 0;
}
//OUTPUT

/*
//Challenge #1
Enter the String : hello
The length of string hello = 5
*/

/*
//Challenge #2
Original = hi
Copy = hi
*/

 //Challenge #3
//The strcmp result is 0
