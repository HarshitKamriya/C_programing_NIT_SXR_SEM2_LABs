#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("the sum of n natural number are:\n");
    int ans =0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    printf("%d is sum of first n natural number",ans);




    return 0;
}
