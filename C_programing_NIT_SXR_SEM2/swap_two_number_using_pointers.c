#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    swap(a,b);






    return 0;
}
void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
    printf("The swaped numbers are a now is %d and b now is %d",a,b);


}

