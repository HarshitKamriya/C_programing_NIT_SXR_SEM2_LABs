#include <stdio.h>
int main(){
    int a =5,b=7,c =10;
    max_of_three(a,b,c);






    return 0;
}
void max_of_three(int a,int b,int c){
    if(a>b){
        if(a>c){
            printf("The first number is greatgest.");
        }
        else{
            printf("The third number is greatest.");
        }
    }
    else{
        if(b>c){
            printf("The second number is greatest");
        }
        else{
            printf("The third number is greatest.");
        }
    }
}
