//Multiplying input array by a given number using pointers
//Author: ashish4hub
#include<stdio.h>
int main(){
int e,y;
printf("Enter number of elements: ");
scanf("%d",&e);
printf("Enter %d numbers: ",e);
int arr[e];
for(int i = 0; i < e; i++){
scanf("%d",&arr[i]);
}
printf("Number to multiply with the array: ");
scanf("%d",&y);
printf("Given array: ");
for(int i = 0; i < e; i++){
printf("%d ",arr[i]);
}
printf("\nMultiplied array: ");
//use of Pointer to modify value of elements in the array
for(int i = 0; i < e; i++){
int *p = &arr[i];
*p *= y;
printf("%d ",*p);
}
}
