//Program: Print the elemnts of an Array in reverse order using a new Array
#include<stdio.h>
int main() {
int nums[7] = {3, 9, 1, 6, 2, 8, 5};
int rev[7];
for(int i=0;i<7;i++){
rev[i]=nums[6-i];
}
for(int i=0;i<7;i++){
printf("%d ",rev[i]);
}
}
