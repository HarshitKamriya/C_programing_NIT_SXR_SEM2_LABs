#include <stdio.h>
int main(){
    int count =1;
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    printf("This is the end of the loop");

    return 0;
}

