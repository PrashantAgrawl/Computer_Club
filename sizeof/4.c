#include <stdio.h>

int main()
{
	int i = 5;
	
	printf("%u\n", sizeof(++i));
	printf("%d\n", i);
	
/*
	1. sizeof is an operator (actually compile time unary operator).Used to compute size of its operand
	2. Tells the no. of bytes required to store its operand. Operand is an expression which is not evaluated
	3. So in the case below, it will not evaluate ++i
	4. sizeof is of unsigned integral type which is usually denoted by size_t
	
	5. sizeof can be applied to any data-type, including primitive types such as integer and floating-point types, pointer types, or compound datatypes such as Structure, union etc.
*/
	
        return 0;
}
