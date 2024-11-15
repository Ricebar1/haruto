#include <stdio.h>

int main(void)
{
    int A,B,C;
    
    A=20;
    B=40;
    C=60;
    
    if(A==20)
        printf("Aさんは20歳です\n");
    if(B==20)
        printf("BさんはAさんの2倍年上です\n");
    if(B>=20)
        printf("Bさんは20歳以上です\n");
    if(A<20)
        printf("Aさんは成人しています\n");
    if(B>A)
        printf("CさんはAさんより３倍年をとっています\n");
    if(C>B)
        printf("CさんはBさんより1.5倍年をとっています\n");
    
    return 0;

}