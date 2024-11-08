#include<stdio.h>

int main(void)
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットの小文字を入力して下さい>>>");
    scanf("%c",&small);
    diff='a'-'A';
    large=small-diff;
    
    printf("小文字は%c\n  大文字は%c",small,large);
    
    return 0;
    
}