#include <stdio.h>
int main(){
    int i=1;
    printf("The number which we have to print is: \n");
    for(i=1;i<=30;i++){
        if(i%5 ==0){
            break;
        }
        printf("%d \n",i);
    }
    printf("This is the end of the loop");









    return 0;
}
