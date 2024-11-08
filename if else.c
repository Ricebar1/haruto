#include <stdio.h>

int main()
{
    int A,B;
    
    printf("How many smartphone app games do you have installed?");
    scanf("%d",&A);
    
    printf("How many game console cassettes do you have?");
    scanf("%d",&B);
    
    int sum=A+B;
    
    if (sum>=10)
    {
        printf("So you like games?Let's play next time");
    }
    
    else
    {
        printf("Do you have any game recommendations");
    }
    
    return 0;
    
}