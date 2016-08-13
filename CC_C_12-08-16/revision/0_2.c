/* Computer Club C Classes
Date-12/08/16
*/

# include <stdio.h>
int main(int argc , char *argv[])
{
	int i;
	//argc contains total number of arguments , including filename .
	//all the arguments are stored in argv array with argc[0] as executable filename .
	
	for(i=0;i<argc;i++)
	{
		printf("argv[%d]=%s\n",i,argv[i]);	
	}
	
}
