#include <stdio.h>
int main(){
    int n;
    printf("enter the number for which you want to calculate factorial of it\n");
    scanf("%d",&n);
    int ans =1;
    for(int i=1;i<=n;i++){
        ans *= i;
    }
    printf("the factorial of the given no is %d",ans);



    return 0;
}
