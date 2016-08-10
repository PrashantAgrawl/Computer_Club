#include<stdio.h>
int main()
{
	char c=-64;
	int i=-32;
	unsigned int u =-16;
	
	if(c>i)
		printf("pass1");
	else
		printf("fail1\n");
		
    if(i<u)
		printf("pass2\n");
	else
		printf("fail2");
	return 0;
}
