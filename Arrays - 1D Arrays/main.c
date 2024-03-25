#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    /*
    // challenge-1
    int phnnum[10],max;
    printf("Enter phone number : ");
    for(int i = 0; i < 10; i++){
        scanf("%d",&phnnum[i]);
    }

    max = phnnum[0];
    for(int i = 1; i < 10; i++){
        if (phnnum[i] > max)
            max = phnnum[i];
    }

    printf("Maximum digit of phone number = %d\n",max);
    */

    /*
    // challenge-2
    int phnnum[10], maxIndex;
    for(int i = 0; i < 10; i++){
        printf("Enter %d digit : ", i+1);
        scanf("%d",&phnnum[i]);
    }

    maxIndex = 0;
    for(int i = 1; i < 10; i++){
        if (phnnum[i] > phnnum[maxIndex])
            maxIndex = i;
    }

    printf("Maximum digit of phone number is at index %d\n", maxIndex);

    */

    /*
    //Milestone
    float Temp[SIZE];
    float sum = 0;

    for (int i = 0; i < SIZE ; i++){
        printf("Enter Day-%d temperature : ",i+1);
        scanf("%f",&Temp[i]);
    }

    float min = Temp[0];
    float max = Temp[0];
    int hottest_day = 0, coldest_day = 0;


    for(int i = 0; i < SIZE ; i++){
        sum = sum + Temp[i];

        if (Temp[i] > max){
            max = Temp[i];
            hottest_day = i;
            continue;
        }

        if (Temp[i] < min){
            min = Temp[i];
            coldest_day = i;
        }
    }

    float Avg = sum / SIZE;
    printf("Average Temperature = %.2f\nMinimum Temperature %.2f is on %d day\nMaximum Temperature %.2f is on %d day.\n",Avg,min,coldest_day+1,max,hottest_day+1);
    */


    /*
    //Good Neighbours
    int num[SIZE], flag = 0;

    for (int i = 0; i < SIZE; i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&num[i]);
    }

    for(int i = 1; i < SIZE-1; i++){
        if (num[i] == num[i-1] * num[i+1])
            flag = 1;
            break;
    }
    if(flag == 1)
        printf("Array has Good Neighbours\n");
    else
        printf("Array doesn't have Good Neighbours\n");
    */


    //Challenge -3
    int pullups[SIZE];
    for (int i = 0; i < SIZE; i++){
        printf("Enter %d day pullups : ",i+1);
        scanf("%d",&pullups[i]);
    }
    printf("\n");
    for (int i = SIZE-1; i>=0; i--){
        printf("No. of pullups %d days ago = %d\n",SIZE-i-1,pullups[i]);
    }



    return 0;
}

//OUTPUT
/*
// challenge-1
Enter phone number : 4
5
8
2
7
2
8
2
8
5
Maximum digit of phone number = 8
*/

/*
// challenge-2
Enter 1 digit : 4
Enter 2 digit : 5
Enter 3 digit : 8
Enter 4 digit : 2
Enter 5 digit : 7
Enter 6 digit : 2
Enter 7 digit : 8
Enter 8 digit : 2
Enter 9 digit : 8
Enter 10 digit : 5
Maximum digit of phone number is at index 2
*/

/*
//Milestone
Enter Day-1 temperature : 35.2
Enter Day-2 temperature : 36.4
Enter Day-3 temperature : 38.6
Enter Day-4 temperature : 35.2
Enter Day-5 temperature : 36.1
Enter Day-6 temperature : 39.4
Enter Day-7 temperature : 33.5
Average Temperature = 36.34
Minimum Temperature 33.50 is on 7 day
Maximum Temperature 39.40 is on 6 day.
*/

/*
//Good Neighbours
Enter 1 number : 4
Enter 2 number : 4
Enter 3 number : 7
Enter 4 number : 4
Enter 5 number : 9
Array doesn't have Good Neighbours
*/


/*
//Challenge -3
Enter 1 day pullups : 3
Enter 2 day pullups : 6
Enter 3 day pullups : 12
Enter 4 day pullups : 18
Enter 5 day pullups : 26
Enter 6 day pullups : 33
Enter 7 day pullups : 41
Enter 8 day pullups : 49
Enter 9 day pullups : 55
Enter 10 day pullups : 60

No. of pullups 0 days ago = 60
No. of pullups 1 days ago = 55
No. of pullups 2 days ago = 49
No. of pullups 3 days ago = 41
No. of pullups 4 days ago = 33
No. of pullups 5 days ago = 26
No. of pullups 6 days ago = 18
No. of pullups 7 days ago = 12
No. of pullups 8 days ago = 6
No. of pullups 9 days ago = 3
*/
