#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    // ASCII Values
    char val = 'a';
    printf("Character : %c\n",val);
    printf("Decimal : %d\n",val);
    printf("Hexadecimal : %X\n",val);
   */

    /*
     // Hex date
     int d,m,y;
     printf("Enter year : ");
     scanf("%d",&y);
     printf("Enter month : ");
     scanf("%d",&m);
     printf("Enter day : ");
     scanf("%d",&d);

     printf("Day = 0x%X\nMonth = 0x%X\nDay = 0x%X\n",d,m,y);
    */

    /*
    //upper or lower case
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);

    if(c>=97 && c<=122)
        printf("Lowercase Letter");
    else if (c>=65 && c<=90)
        printf("Uppercase Letter");
    else if (c>=48 && c<=57)
        printf("Digit");
    else
        printf("Other");
    */

    //Assignment - 4Q
    char c;
    printf("Enter a character : ");
    scanf("%x",&c);

    printf("'%x' --> %b\n",c,&c);

      return 0;

}

/*
ASCII Values
Character : a
Decimal : 97
Hexadecimal : 61

Hex date
Enter year : 2012
Enter month : 8
Enter day : 20
Day = 0x14
Month = 0x8
Day = 0x7DC

upper or lower case
Enter a character : G
Uppercase Letter
*/
