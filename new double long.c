#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("long doubleの最大値:%lli\n",LDBL_MAX);
    printf("long doubleの最小値:%lli\n",LDBL_MIN);
    printf("long doubleの精度:%lli\n",LDBL_DIG);
    
    return 0;
}