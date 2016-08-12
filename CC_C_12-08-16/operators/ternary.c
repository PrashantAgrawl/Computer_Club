/* Computer Club C Classes
Date-12/08/16
*/
#include<stdio.h>
int main()
{
	int big,x=3,y=2,z=1,q=4;
	big=(x>y?(x<z?20:10 && y>x?50:10) : (y>z?40:10 || x<q?30:10));
	printf("\nbig =%d\n",big);
	return 0;
}
