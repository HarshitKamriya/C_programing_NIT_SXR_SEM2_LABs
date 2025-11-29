
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number for which you want to print the fibonaci series\n");
    scanf("%d",&n);
    printf("the no n is %d \n",n);
    int a =0,b =1,i,c;
             printf("%d",c);
         printf("%d%d",a,b);


    for(i=3;i<=n-1;i++)
    {
            //printf("ji");
        c= a+b;
         printf("%d",c);
        a = b;
        b = c;

    }
   //printf("the series is %d",b);



    return 0;
}
