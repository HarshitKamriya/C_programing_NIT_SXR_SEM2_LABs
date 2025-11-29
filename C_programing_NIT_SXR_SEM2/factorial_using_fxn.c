#include <stdio.h>
int main(){
    int n =5;
    factorial(n);
    return 0;
}
void factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    printf("the factorial is %d",ans);
}
