# include<stdio.h>

int main()
{
	char ch = 'c' ;
	int a=0 ;
	float f=1.00 ;
	double d=1.00 ;
	long  l1=12 ;
	long long l2=12 ;
	
	
	
	printf("sizeof('c') %lu\n",sizeof('c'));
	printf("sizeof(char) %lu\n",sizeof(char));
	
	
	printf("sizeof(4) %lu\n",sizeof(4));
	printf("sizeof(int) %lu\n",sizeof(int));
	
	
	printf("sizeof(1.00) %lu\n",sizeof(1.00));
	printf("sizeof(float) %lu\n",sizeof(float));
	

	printf("sizeof(1.00f) %lu\n",sizeof(1.00f));
	printf("sizeof(double) %lu\n",sizeof(double));
	
	
	
	printf("sizeof(1L) %lu\n",sizeof(1L));
	printf("sizeof(long) %lu\n",sizeof(long)); 
	
	printf("sizeof(1LL) %lu\n",sizeof(1LL));
	printf("sizeof(long long) %lu\n",sizeof(long long));
	
	
}
