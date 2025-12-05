//Program: To count the number of times same element occurs in an Array
//Author: ashish4hub
#include<stdio.h>
int main() {
int n[15]={1,5,5,2,5,7,8,5,5,6,7,5,8,4,5};
int count=0,key=5;
for(int i=0;i<15;i++){
if(n[i]==key){
count++;
}
}
printf("%d", count);
}
