/* Computer Club C Classes
Date-12/08/16
*/

#include <stdio.h>
int main()
{
	int a=1;
	int x=++a*a++;    //Undefined behaviour
	printf("a=%d x=%d\n",a,x);
}
