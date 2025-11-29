#include <stdio.h>
int main(){
    int n = 121;
    pailndrome(n);
    return 0;
}
void pailndrome(int n){
    int i = n;
    int x = 0;
    while(i>0){
        x = x*10 + i%10;
        i = i/10;
    }
    if(x == n){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
}
