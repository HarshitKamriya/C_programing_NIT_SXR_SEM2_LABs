#include <stdio.h>
int main(){
    int n =5;
    fiboncahi_series(n);


    return 0;
}
void fiboncahi_series(int n){
    if(n==1 || n == 2){
        printf(1);
    }
    int a = 1;
    int b = 1;
    for(int i=3;i<=n;i++){
        int c = a+b;
        a = b;
        b = c;
    }
    printf("%d \n",b);

}
