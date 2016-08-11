/*Computer Club 
Date-10/08/16
sizeof-exception case - Variable Length Array

Note about VLAs: Just get a brief idea, do not read further
 1. VLAs are variable-sized arrays.
 2. They can be instantiated only inside functions (cannot have global declaration)
 3. Unlike traditional arrays whose size is computed during compile time, the length of these arrays is computed during run-time, based upon the variable given.
*/
#include <stdio.h>

int main()
{
	int i = 5;
	/*
	Since their size is computed at run-time, therefore sizeof is not computed by the compiler at compile time but evaluted during run-time,
  consequently anything inside sizeof(when VLA is used) is evaluated. COnsequently i will be evaluated here.
	*/
	printf("%lu\n", sizeof(int [++i]));
	/*
	Just like you write sizeof(int), you can write sizeof(int[5]) which represents size of an integer array of 5. The same is above case where we have ++i instead of 5.
	However, you cannot write sizeof(int arr[++i]) since that is a declaration and declarations cannpot be written inside a sizeof.
	*/
	printf("%d\n", i);
	
	
}


