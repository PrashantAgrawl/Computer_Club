/*Computer Club 
Date-10/08/16
sizeof operator 

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
        double *p = NULL;
        unsigned long a = sizeof(p = (double *)malloc(sizeof(double)));  // sizeof returns unsigned long
        /*
        malloc call will not execute because sizeof is compile time operator
        sizeof fetches size in bytes of p's datatype i.e. double*
        */
        
        printf("a = %lu p = %p\n",a,p); // here p will be NIL as no address is stored there . 
        return 0;
}

