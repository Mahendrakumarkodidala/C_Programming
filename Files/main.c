#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    FILE* fp;
	fp = fopen("myFirstFile.txt","w");

	if(fp == NULL)
		printf("The Opening of file has failed\n");
	else{
		printf("The Opening of file is successful\n");
		fclose(fp);
	}
	*/

	/*
	FILE* fp;
	fp = fopen("myFirstFile.txt","r");

	if(fp == NULL)
		printf("The reading of file has failed\n");
	else{
		printf("The reading of file is successful\n");
		fclose(fp);
	}
    */

    /*
    FILE* fp;
    char c1;

	fp = fopen("myFirstFile.txt","r");

	if(fp != NULL){
		printf("The reading of file is successful\n");
		c1 = fgetc(fp);
		printf("The First character that was read = %c\n",c1);
		c1 = fgetc(fp);
		printf("The Second character that was read = %c\n",c1);
		c1=fgetc(stdin);
		printf("The third character that was read from keyboard = %c\n",c1);
		fclose(fp);
	}

	//OUTPUT
	The reading of file is successful
    The First character that was read = H
    The Second character that was read = e
    l
    The third character that was read from keyboard = l
    */

    /*
    FILE* fp;

	fp = fopen("mySecondFile.txt","w");

	if(fp != NULL){
        fputc('H',fp);
        fputc('a',fp);
        fputc('i',fp);
        fclose(fp);
	}
	putchar('m');
	*/

    /*
	FILE* fp;
    int num = 5;
    float num2 = 8.6;

    fp = fopen("mySecondFile.txt","w");
	if(fp != NULL){
        fprintf(fp, "%d ", num);
        fprintf(fp, " %.2f", num2);
        fclose(fp);
	}
	*/

    /*
    FILE* fp;
    int num;
    fp = fopen("mySecondFile.txt","r");
	if(fp != NULL){
        fscanf(fp, "%d", &num);
        printf("num from file = %d\n", num);
        fclose(fp);
	}
	*/

    /*
    FILE* fp;
	fp = fopen("myThridFile.txt","w");
	if(fp != NULL){
        fputs("Hello\n",fp);
        fputs("How are you?\n",fp);
        fclose(fp);
	}
	*/

    /*
	char st[10];
    int count = 0;

    FILE* fp;
	fp = fopen("myFirstFile.txt","r");
	if(fp != NULL){
		while(fgets(st,10,fp))
		    printf("String %d read = %s\n",++count,st);
        fclose(fp);
	}
    */

    /*
    //Exercise #1
    char mychar;
    int count = 0;

    FILE* fp;
	fp = fopen("test.txt","r");
	if(fp != NULL){
		while((mychar = fgetc(fp)) != EOF)
        {
            printf("%c",mychar);
            count++;
        }
		printf("\nCount of Characters in the file = %d\n",count);


        fclose(fp);
	}
	*/


    /*
	//Exercise #2
    char mychar;
    int count = 0;

    FILE* fp;
	fp = fopen("test.txt","r");
	if(fp != NULL){
		while((mychar = fgetc(fp)) != EOF)
        {
            if(mychar == '\n')
                count++;
        }
		printf("\nNumber of rows of Characters in the file = %d\n",count+1);

        fclose(fp);
	}
	*/


    /*
	//Exercise #3
    FILE* fp;
	fp = fopen("test3.txt","w");
	if(fp != NULL){
            for(int i=1; i<=10; i++)
                fprintf(fp, "%d     %d\n", i,i*i);

        fclose(fp);
	}
	*/

    /*
	//Exercise #4
	int num1,num2;
    FILE* fp;
	fp = fopen("test3.txt","r");
	if(fp != NULL){
            for(int i=1; i<=10; i++){
                fscanf(fp, "%d%d", &num1,&num2);
                printf("square of %d  from file = %d\n", num1,num2);
            }

        fclose(fp);
	}
	*/

    /*
    //Exercise #5
    FILE* fp;
    char f1[100] = {0}, mychar;
    int count = 0;
    printf("Enter the character to count : ");
    scanf("%c",&mychar);
    printf("Enter the file name : ");
    scanf("%s",f1);
    fp = fopen(f1,"r");
    if(fp != NULL){
        while(!feof(fp))
        {
            if(fgetc(fp) == mychar)
                count++;
        }
		printf("\nNumber of times %c Character used in the file = %d\n",mychar,count);

        fclose(fp);
	}
	*/



    return 0;
}




















