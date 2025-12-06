//Program: Demonstrate the use and implementation of selection sorting in C
#include<stdio.h>
int main(){
    int n,key,found = 0;
    int count = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    //Storing the array enter by user
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    //Selection sorting
    for(int i = 0; i < n-1; i++){
        int minindex = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[minindex]){
                minindex = j;
            }
        }
        //Swapping elements
        int temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
    }
    //Printing the sorted array
    printf("Sorted array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
        
    }
    //Linear search 
    printf("\nEnter Element To Search : ");
    scanf("%d",&key);
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            count++; //count variable 
            found = 1;
        
        }
    }
    //Count occurrence of key element 
    if(found == 1){
    printf("\nElement %d occurs %d times",key,count);
    }
    //If key element not found
    if(found != 1){
        printf("\nElement %d is not found in array",key);
    }
    return 0;
}

//Example
  // Input
     //Enter number of elements: 10
    //Enter 10 Elements: 5 7 9 5 4 3 7 6 5 3
 // Output
    //Sorted array:
    //3 3 4 5 5 6 7 7 9
   //Enter Element To Search : 7
  //Element 7 occurs 2 times
