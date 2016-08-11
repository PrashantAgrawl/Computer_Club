/*Computer Club 
Date-10/08/16
Topic - Type Promotion
*/

#include<stdio.h>
int main()
{
	if(-1L>1UL)
		printf("paul is crazy\n");
	else
		printf("mannu is Crazy\n");
	/*
		L == long int
		UL == unsigned long int
		Whenever two different datatypes are operated upon, expression evaluates to the bigger datatypes
		This is called type promotion
		Must read type promotion rules from Dennis Ritchie
		-1 = 111111....32 bits = some very big no. (if unsigned)
		1 = 0000(31 times)..1 = 1
		condition becomes true driving paul crazy :D
	*/
	return 0;
}
