/* Computer Club C Classes
Date-12/08/16
*/
#include<stdio.h>
int main()
{
	char a='A';
	
	if(a=='A' || (a='Z'))
		printf("1\n");
	
	if(a=='Z' && (a='L') )
		printf("2\n") ;
	
	if( (a=='Z') || (a='L') && (a=='A')  )
		printf("3\n") ;
		
		
    printf("a=%c\n",a);
	
}
