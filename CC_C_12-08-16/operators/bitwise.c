/* Computer Club C Classes
Date-12/08/16
*/
#include <stdio.h>
int main()
{
	int c=(-2>>2);

	int a=0xff; 
	int b=0x10;	// setting 4th bit (counting from 0) as 1 ,equivalent to 1<<4

	printf("%d\n",a&b); // check 4th bit (counting from 0) of a is 1 or not , 
	printf("%d\n",c);
	return 0;
}
