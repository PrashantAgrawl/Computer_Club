/* Computer Club C Classes
Date-12/08/16
*/
#include<stdio.h>
int main()
{
	char a='A';
	
	/*	
		in || operator, if 1st expression is true then 2nd doesnt evaluates
		
		in && operator, if 1st expression is false then 2nd doesnt evaluates 
	
	*/
	
	if(a=='A' || (a='Z'))   	//a=='A' is true , so (a='Z') doesn't evaluates
		printf("1\n");
	
	if(a=='Z' && (a='L') )		//a=='Z' is false , so (a='L') doesn't evaluates.
		printf("2\n") ;
	
	if( (a=='Z') || (a='L') && (a=='A')  ) //this expression is equvalent to (a=='Z') || ((a='L') && (a=='A'))
		printf("3\n") ;
		
		
    printf("a=%c\n",a);
	
}
