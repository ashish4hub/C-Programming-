//Program: To find the maximum number in an array of numbers.
#include<stdio.h>
int main() {
int n[8]={3,11,7,9,2,15,25,32},v=0;
int max=n[0];
for(int i=0;i<8;i++){
if(n[i]>max){
max=n[i];
}
}
printf("%d",max);
return 0;
}
