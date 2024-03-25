#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main()
{

  //Ex - 1
  int myarr[2][3] ={{1,5},{2,6,10}};

  for(int i=0; i<2; i++){    // Going over all the rows
    for(int j=0; j<3; j++){  // Going over all the Columns
        printf("%d ",myarr[i][j]);
         printf("%lu ",&myarr[i][j]);

    }
    printf("\n");
  }



  /*
  //EX-2 Multiplication Table

  int mat[SIZE][SIZE];

  for(int i=1; i<SIZE; i++){
    for(int j=1; j<SIZE;j++){
        mat[i][j] = i*j;
        printf("%5d ",mat[i][j]);
    }
    printf("\n");
  }
    */



    return 0;
}

//OUTPUT

/*
//Ex - 1
1, 5, 9, 2, 6, 10,
*/


/*
//EX-2 Multiplication Table
    1     2     3     4     5     6     7     8     9    10
    2     4     6     8    10    12    14    16    18    20
    3     6     9    12    15    18    21    24    27    30
    4     8    12    16    20    24    28    32    36    40
    5    10    15    20    25    30    35    40    45    50
    6    12    18    24    30    36    42    48    54    60
    7    14    21    28    35    42    49    56    63    70
    8    16    24    32    40    48    56    64    72    80
    9    18    27    36    45    54    63    72    81    90
   10    20    30    40    50    60    70    80    90   100
*/
