/* Computer Club C Classes
Date-12/08/16
*/
#include<stdio.h>

int a = 5; // data
int b = a;

/*
value and memory in bss and data sections is allocated at compile time i.e compiler has to place the value for the variable during compile time only.
value of a can be changed at run time...therefore, compiler doesn't know what to put in the data segment for a => compilation error.
size command shows the size of some of the sections of a program(in bytes)
Memory allocation for stack and heap happens at run time. Therefore, size command does not show the size of stack and heap.
dec and hex columns in the output of size command represent the combined size of text, bss and data segments in decimal and hexadecimal respectively
*/

int main()
{
	int d;		//stack
	static int c;//bss
	static int b = 6;//data
	return 0;
}
