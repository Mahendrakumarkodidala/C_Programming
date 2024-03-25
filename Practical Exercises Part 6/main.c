#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//int ArraySum(int *arr,int SIZE);


void Reset(int *arr, int size)
{
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    for(int i=0; i<size; i++){
        arr[i]=0;
    }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}


int main()
{
    /*
    //Copying an Array
    int arr1[SIZE] = {1, 2, 2000};
    int arr2[SIZE];

    for(int i=0; i < SIZE; i++){
        arr2[i] = arr1[i];
        printf("Original Array Element = %d \n",arr1[i]);
        printf("Updated Array Element = %d \n",arr2[i]);
    }
    */


    /*
    //Palindrome
    int A[SIZE], flag = 0;
     for(int i=0; i < SIZE; i++){
            printf("Enter the A[%d] element : ",i);
            scanf("%d",&A[i]);
     }

     for(int i=0; i<SIZE/2; i++){
        if(A[i]==A[SIZE-1-i]){
            flag = 1;
            break;
        }
     }

     if(flag == 1)
        printf("Array is a Palindrome\n");
     else
        printf("Array is not a Palindrome\n");
    */


    /*
    //LargestSum
    int arr[SIZE], sum;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }

     sum = arr[0]+arr[1];

     for(int i=1; i < SIZE-1; i++){
         if(arr[i]+arr[i+1]>sum){
            sum = arr[i]+arr[i+1];
         }
     }

     printf("The Largest Sum of neighbors in array is %d\n",sum);
    */


    /*
    //Sorted
    int arr[SIZE],flag = 2;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }

    for (int i=1; i<SIZE; i++){
        if(arr[i-1] > arr[i]){
            flag = 0;
            break;
        }

        if(arr[i-1]==arr[i])
            flag = 1;
    }
    if(flag == 2)
        printf("The array is Really Sorted\n");
    if(flag == 1)
        printf("The array is Sorted\n");
    if(flag == 0)
        printf("The array is NOT Sorted\n");
    */


    /*
    //PrintCountUniqueCharacters
    int arr[SIZE], duplicate=0, count=0;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
      for(int i=0; i < SIZE; i++){
          for(int j=0; j < SIZE; j++){
            if (i == j)
                continue;
            if(arr[i]== arr[j]){
               duplicate = 1;
               break;
            }
          }
            if(duplicate == 0){
                printf("Unique Value = %d\n",arr[i]);
                count++;
            }
            else
                duplicate=0;
      }
      printf("Total Unique values = %d\n",count);
      */


    /*
    //CountNotUniqueCharacters
    int arr[SIZE], duplicate=0, count=0;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
     for(int i=0; i < SIZE; i++){
        for(int j=0; j < i; j++){
            if(arr[i] == arr[j]){
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 1)
            break;
        else
            for(int j=0; j < i+1; j++){
                  if(arr[i] == arr[j]){
                      count++;
                      break;
                }
            }
            duplicate=0;
     }
     printf("Total Non Unique values = %d\n",count);
     */


    /*
    //RotateLeft-1position
    int arr[SIZE], temp;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
    printf("Before Rotation:\n");
    for(int i=0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }
    temp = arr[0];

    for(int i=1; i<SIZE; i++){
        arr[i-1]=arr[i];
    }
    arr[SIZE-1]=temp;
    printf("\nAfter Rotation:\n");
    for(int i=0; i < SIZE; i++){
         printf("%d ",arr[i]);
     }
     printf("\n");
    */


    /*
    //RotateLeft-Nposition
    int arr[SIZE], n, temp;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
    printf("Enter number of positions : ");
    scanf("%d",&n);

    printf("Before Rotation:\n");
    for(int i=0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }

    for(int i=0; i<n; i++){
        temp = arr[0];

        for(int i=1; i<SIZE; i++){
            arr[i-1]=arr[i];
        }
        arr[SIZE-1]=temp;
     }

    printf("\nAfter Rotation:\n");
    for(int i=0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    */


    /*
    //RotateLeft-Nposition
    int arr[SIZE], n, temp;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
    printf("Enter number of positions : ");
    scanf("%d",&n);

    printf("Before Rotation:\n");
    for(int i=0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }

    for(int i=0; i<n; i++){
        temp = arr[SIZE-1];

        for(int i=SIZE-1; i>0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
     }

    printf("\nAfter Rotation:\n");
    for(int i=0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    */


    /*
    //SumClosestToZero
    int arr[SIZE], min, v1,v2,sum;
    for(int i=0; i < SIZE; i++){
        printf("Enter the A[%d] element : ",i);
        scanf("%d",&arr[i]);
     }
     min = arr[0]+arr[1];
     for(int i=0; i<SIZE; i++){
        for(int j=i+1; j<SIZE; j++){
            sum = arr[i]+arr[j];
            if(abs(sum)<abs(min))
                min=sum;
                v1=i;
                v2=j;
        }
     }
     printf("The minimum sum for %d and %d = %d\n",v1,v2,min);
    */

    /*
    //ArraySum
    int arr[3] = {1,3,10};
     printf("The Sum of Array = %d\n",ArraySum( arr,3));
    */

    //Reset
    int arr[3] = {1,3,10};
    Reset(arr,3);

    return 0;
}
/*
int ArraySum(int *arr,int SIZE)
{
    int sum=0;
    for(int i=0; i<SIZE; i++){
        sum = sum + arr[i];
    }

    return sum;
}
*/





//OUTPUT
/*
//Copying an Array
Original Array Element = 1
Updated Array Element = 1
Original Array Element = 2
Updated Array Element = 2
Original Array Element = 2000
Updated Array Element = 2000
*/

/*
//Palindrome
Enter the A[0] element : 1
Enter the A[1] element : 2
Enter the A[2] element : 3
Enter the A[3] element : 2
Enter the A[4] element : 1
Array is a Palindrome
*/

/*
//LargestSum
Enter the A[0] element : 5
Enter the A[1] element : 7
Enter the A[2] element : 2
Enter the A[3] element : 5
Enter the A[4] element : 1
The Largest Sum of neighbors in array is 12
*/

/*
//Sorted
Enter the A[0] element : 1
Enter the A[1] element : 2
Enter the A[2] element : 5
Enter the A[3] element : 7
Enter the A[4] element : 10
The array is Really Sorted
*/

/*
//PrintCountUniqueCharacters
Enter the A[0] element : 5
Enter the A[1] element : 7
Enter the A[2] element : 3
Enter the A[3] element : 4
Enter the A[4] element : 5
Enter the A[5] element : 6
Enter the A[6] element : 8
Enter the A[7] element : 9
Enter the A[8] element : 10
Enter the A[9] element : 3
Unique Value = 7
Unique Value = 4
Unique Value = 6
Unique Value = 8
Unique Value = 9
Unique Value = 10
Total Unique values = 6
*/

/*
//CountNotUniqueCharacters
Enter the A[0] element : 1
Enter the A[1] element : 2
Enter the A[2] element : 3
Enter the A[3] element : 1
Enter the A[4] element : 2
Enter the A[5] element : 3
Enter the A[6] element : 1
Enter the A[7] element : 2
Enter the A[8] element : 3
Enter the A[9] element : 1
Total Non Unique values = 3
*/

/*
//RotateLeft-1position
Enter the A[0] element : 5
Enter the A[1] element : 4
Enter the A[2] element : 7
Enter the A[3] element : 3
Before Rotation:
5 4 7 3
After Rotation:
4 7 3 5
*/

/*
//RotateLeft-Nposition
Enter the A[0] element : 5
Enter the A[1] element : 4
Enter the A[2] element : 7
Enter the A[3] element : 3
Enter number of positions : 2
Before Rotation:
5 4 7 3
After Rotation:
7 3 5 4
*/

/*
//RotateRight-Nposition
Enter the A[0] element : 5
Enter the A[1] element : 4
Enter the A[2] element : 7
Enter the A[3] element : 3
Enter number of positions : 1
Before Rotation:
5 4 7 3
After Rotation:
3 5 4 7
*/

/*
//SumClosestToZero
Enter the A[0] element : 1
Enter the A[1] element : -2
Enter the A[2] element : 2
Enter the A[3] element : 3
The minimum sum for 2 and 3 = 0
*/

/*
//ArraySum
The Sum of Array = 14
*/

/*
//Reset
1 3 10
0 0 0
*/




