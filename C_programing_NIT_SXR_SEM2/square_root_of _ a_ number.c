#include <stdio.h>
int main(){
    int i;
    printf("The number which we have to print The Square root is: \n");
    scanf("%d",&i);
    int j;
    int count =1;
    for(j=1;j*j<=i;j++){

        count = j;
    }
    printf("The square root of the number is %d",count);
    return 0;
}

