#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int intelligence, stamina, charisma;
    int total=20;
    
    srand(time(0));
    
    intelligence=rand()%(total-1)+1;
    stamina=rand()%(total-intelligence)+1;
    charisma=total-intelligence-stamina;
    
    printf("Intelligence:%d\nStamina:%d\nCharisma:%d\n",intelligence,stamina,charisma);
    
    if(intelligence>=stamina&&intelligence>=charisma){
        printf("Class:Mage\n");
    }else if(stamina>=intelligence&&stamina>=intelligence){
        printf("Class:Knigt\n");
    }else{
        printf("Class:Thief\n");
    }
    return 0;
}