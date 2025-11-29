#include <stdio.h>
int main(){

    int n;
    printf("Enter the number for which you want to find the pailndrome\n");
    scanf("%d",&n);
    int i = n;
    int sum = 0;
    while(i>0){
        sum = sum*10 + i%10;
        i /= 10;
    }
    if(sum == n){
        printf("the number is pailndrome");
    }
    else{
        printf("the number is not paildrome");
    }

    return 0;
}
