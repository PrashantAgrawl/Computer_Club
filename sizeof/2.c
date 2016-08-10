#include <stdio.h>

int main()
{
	int i = 5;
	
	//enum {low,high}p;
	//printf("%lu\n",sizeof(low));
	
	printf("%lu\n", sizeof(int [++i]));
	printf("%d\n", i);
	
	//printf("%u\n");
}
