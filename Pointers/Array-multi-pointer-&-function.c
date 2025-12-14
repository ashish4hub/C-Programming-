// Multiplying elements of an array given by user by any given number using pointer and function. 
// Demonstrate use of pointers, array and function call by reference
#include<stdio.h>
void fnc(int *arr, int n, int k);
int main(){
    int n,k,x;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to multiply: ");
    scanf("%d",&k);
    fnc(arr,n,k);
}
void fnc(int *arr,int n, int k){
    printf("Multiplied array: ");
    for(int i = 0; i < n; i++){
        int *p = &arr[i];
        *p *= k;
        printf("%d ",*p);
    }
}
