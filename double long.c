#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("long doubleの最大値:%Lf\n",LDBL_MAX);
    printf("long doubleの最大値:%Lf\n",LDBL_MIN);
    printf("long doubleの精度:%Lf\n",LDBL_DIG);
    
    return 0;
}