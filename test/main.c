#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1 = 'A';
	unsigned long int aa1 = (unsigned long int)&a1;

	printf("Address = %lu\n",aa1);
    return 0;
}
