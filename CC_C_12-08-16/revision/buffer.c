//MNNIT QOD *C@7*
//Question 1
#include<stdio.h>
int main()
{
	printf("%s","Why do I behave like this?\n");
	unsigned char c =97;
	int i=0;
	while(i<4)
	{
		printf("%c",c+i);
		i++;
	}
	while(1);		//due to this loop ,program never terminates successfully .
	return 0;
}
