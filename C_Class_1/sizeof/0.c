/*Computer Club 
Date-10/08/16

sizeof operator 


*/

# include<stdio.h>

int main()
{
	
	// char and short are promoted to int in memory, even during evaluation
	
	printf("sizeof('c') %lu\n",sizeof('c'));  //'c' will be treated as integral constant ,size of which is 4
	printf("sizeof(char) %lu\n",sizeof(char));
	
	
	printf("sizeof(4) %lu\n",sizeof(4));
	printf("sizeof(int) %lu\n",sizeof(int));
	
	
	printf("sizeof(1.00) %lu\n",sizeof(1.00)); //1.00 will be treated as double constant ,size of which is 8
	printf("sizeof(float) %lu\n",sizeof(float));
	

	printf("sizeof(1.00f) %lu\n",sizeof(1.00f)); //here we are explicitly storing it as float
	printf("sizeof(double) %lu\n",sizeof(double));
	
	
	
	printf("sizeof(1L) %lu\n",sizeof(1L)); 	//here we are explicitly storing it as long , normally 1 would have been taken as int
	printf("sizeof(long) %lu\n",sizeof(long)); 
	
	printf("sizeof(1LL) %lu\n",sizeof(1LL));	//here we are explicitly storing it as long long
	printf("sizeof(long long) %lu\n",sizeof(long long));
	
	
}
