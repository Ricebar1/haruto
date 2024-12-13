#include<stdio.h>
#include<string.h>
#include<ctype.h>

void checkPassword(const char *password){
    int length=strlen(password);
    int hasUpper=0;
    int hasLower=0;
    
    for (int i=0;i<length;i++){
        if (isupper(password[i])){
            hasUpper=1;
        } else if (islower(password[i])){
            hasLower=1;
        }
    }


    if (length>=8&&hasUpper&&hasLower){
        printf("このパスワードは強いです。\n");
    } else{
        printf("このパスワードは強くありません。改善点：\n");
        if (length<8){
         printf("ーパスワードを8文字以上にしてください。\n");
        }
        if (!hasUpper){
         printf("ー大文字を少なくとも1文字含めてください。\n");
        }
        if (!hasLower){
         printf("ー小文字を少なくとも1文字含めてください。\n");
        }
    }
}

int main(){
    char password[100];
    
    printf("パスワードを入力してください：");
    scanf("%99s",password);
    
    checkPassword(password);
    
    return 0;
}
