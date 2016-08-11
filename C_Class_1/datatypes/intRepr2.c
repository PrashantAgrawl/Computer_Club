/*Computer Club 
Date-10/08/16

Integral representation in memory
*/
#include<stdio.h>

/*
	negative integers in C are stored in memory in 2's complement form
	integer = 4 bytes = 32 bits
	5 = 0000000..(29zeros)101
	-5 = 2's complement of 5
	
	consider that integer is of 4 bits
	5 = 101
	stored as 0101
	-5 stored as 1011
	printf ("%d\n", i);
	signed bit (leftmost always in datatype of any size)
if sign bit = 1 => negative number, so the actual number will be obtained by adding minus to the number obtained by taking 2s complement of the negative number.
16 bit integer...max value = 2^15 - 1 (1 bit reserved for sign)
*/

int main()
{
	int j = -2;	
	
	printf("%d %u\n",j, j);
	
	/* 
		%u  reads memory as unsigned  
		%d 	reads memory as signed 
	
		-2 is present in 2's complement form. 
		%d will access value in 2's complement form. 
		%u will access it as it is without considering sign.
	*/
	return 0;
}
