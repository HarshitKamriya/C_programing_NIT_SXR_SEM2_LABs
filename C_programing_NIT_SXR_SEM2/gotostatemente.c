#include <stdio.h>
int main(){
    int i;
    printf("The number which we have to print is: \n");
    scanf("%d",&i);

    if(i%2 == 0){
        goto even;
    }
    else{
        goto odd;
    }

    even:
    printf("The number entered is even\n");
    return 0;
    odd:
    printf("The number entered is odd\n");


    return 0;
}
