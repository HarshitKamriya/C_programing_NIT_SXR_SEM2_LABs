#include <stdio.h>
int sum(int n);
int main(){
    int n =5;
    int ans = sum(n);
    printf("%d",ans);
    return 0;
}
sum(n){
    if(n==1){
        return 1;
    }
    else{
        return sum(n-1)+n;
    }



}
