//Program: To find the sum of all the elements in an Array
#include<stdio.h>
int main() {
int n[5]={2,4,6,8,10},sum = 0;
for(int i=0;i<5;i++){
sum = sum + n[i];
}
printf("%d",sum);
}
