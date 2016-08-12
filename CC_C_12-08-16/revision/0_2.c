/* Computer Club C Classes
Date-12/08/16
*/

# include <stdio.h>
int main(int argc , char *argv[])
{
	int i;
	for(i=0;i<argc;i++)
	{
		printf("argv[%d]=%s\n",i,argv[i]);
	}
	
}
