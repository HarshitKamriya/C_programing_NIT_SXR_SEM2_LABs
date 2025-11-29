#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=5;
    printf(" enter the value of x\n");
    // scanf("%d",&a);
    // printf("%d\n",a);
    // float b = 30.34;
    // printf("the floating value is %f",b);
    if(a>=18){
        printf("you are eligibe for vote as you age is %d",a);
    }
    else{
        printf("you are not eligible to vote as your age is %d",a);
    }
    return 0 ;
}   