#include <stdio.h>
int main(){
    int n;
    printf("Enter the number for which you want to find the fibonachi series\n");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    for(int i=2;i<=n;i++){
        int c = a+b;
        printf("%d\n",c);
    }



    return 0;
}
