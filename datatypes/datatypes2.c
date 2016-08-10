#include<stdio.h>
int main()
{
	unsigned int i;
	for(i = 10 ; i >= 0 ; i--)
		printf("%d", i--);
}
//unsigned value...when i = 0, 0 will be printed...
/*
	i-- will try to change i to -1..but being unsigned.You can understand this by writing -1 in binary and then seeing what will -1 be in unsigned form.
*/
