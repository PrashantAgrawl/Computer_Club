#include <stdio.h>
int main()
{
	char as[] = "\\0\0";
	int i = 0;
	do
	{
		switch(as[i++])
		{
			case '\\' : printf("A\n");
						break;
			case 0   :  printf("B\n");
						break;
			default : 	printf("C\n");
						break;
		}
	 } while(i<3);
	 return 0;
}
