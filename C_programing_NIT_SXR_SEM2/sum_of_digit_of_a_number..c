#include <stdio.h>
int main(){
    int n =234;
    add(n);






    return 0;
}
void add(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    printf("The sum of the digit of the number is %d",sum);


}

