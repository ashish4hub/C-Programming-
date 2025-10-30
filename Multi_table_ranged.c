#include<stdio.h>
int main(){
    int i,a,r;
    printf("ENTER ANY NUMBER :\n");
    scanf("%d",&a);
    printf("ENTER THE RANGE UPTO WHICH MULTIPLICATION TABLE IS REQUIRED:\n");
    scanf("%d",&r);
    printf("THE MULTIPLICATION TABLE OF %d upto %d IS \n",a,r);
    for (i=1;i<=r;i++){
        printf("%d × %d = %d \n",a,i,a*i);
    }
    return 0;
}
