#include <stdio.h>
#include <stdlib.h>

int main()
{
        double *p = NULL;
        unsigned int a = sizeof(p = (double *)malloc(sizeof(double)));
        /*
        malloc call will not execute
        sizeof fetches p's datatype i.e. double*
        */
        p = (double *)malloc(sizeof(double));
        printf("a = %u *p = %p\n",a,p);
        return 0;
}



