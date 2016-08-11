/*Computer Club 
Date-10/08/16
*/

// all lines that start with # are processed by preprocessor
#include <stdio.h>
# define MAX 100

// MAX is a macro here

/* This is comment ,it is replaced by whitespace after preprocessing */


/* 
Why main() is important ?

When you ask your operating system to run a file, it loads it into memory, and jumps to it starting point (_start,etc).
At this point, there is an code, that call main and then exit (The linker is responsible to this part).
If you will write program without main function, the linker will give you an error, since it couldn't find it.
*/

int main()
{
	// return type can be omitted, default is taken as int 
	
	
	printf("MAX=%d",MAX); //this will be replaced as printf("MAX=%d",100) after preprocessing
	/*Note :
	   anything inside string literalis not replaced
	*/
		
	
	return 0; //this can be omitted 
}
