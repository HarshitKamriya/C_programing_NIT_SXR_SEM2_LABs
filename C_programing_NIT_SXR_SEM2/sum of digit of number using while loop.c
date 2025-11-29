#include <stdio.h>
int main(){
    int n;
    printf("Enter the number for which you want to calculate the sum of it's ditig\n");
    scanf("%d",&n);
    int i = n;
    int sum = 0;
    while(i>0){
        sum+= i%10;
        i /= 10;
    }
    printf("The sum of the digit of the given no it %d",sum);






    return 0;
}
