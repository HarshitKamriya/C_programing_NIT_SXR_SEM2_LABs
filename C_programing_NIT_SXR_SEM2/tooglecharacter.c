#include <stdio.h>
int main(){
    char ch ;
    printf("enter the character you want to toggle:\n");
    scanf("%c",&ch);
    if(ch>= 65 && ch<=91){
        int a = ch+32;
        printf("%c",a);
    }
    else{
        int b = ch-32;
        printf("%c",b);
    }


    return 0;
}
