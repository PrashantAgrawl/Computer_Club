/* Computer Club C Classes
Date-12/08/16
*/
#include <stdio.h>
int main()
{
	int a=1,2,3;		//equivalent to int a=1 ,int 2 ,int 3 - this will generate compilation error  
	int b=(1,2,3);		//here b=3 , because (1,2,3) evaluates to 3 (see precedence and associativity)
	int c ={1,2,3};		//here c=1 ,{1,2,3} is an initializer list . So c is initialized to first value provided in the list .
	printf("%d %d \n",b,c,);
}
