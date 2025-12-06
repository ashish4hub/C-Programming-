//Program: Demostation of Bubble Sorting algorithm and Binary Search in an Array
//Author: ashish4hub
#include<stdio.h>

int firstoccr(int n[],int size,int key){
int low=0, high = size -1,mid,ans = -1;
while(low <= high){
//Potential  first index
mid = (low + high) / 2;
if(n[mid] == key){
ans = mid;
high = mid - 1;
}
//Search in left half
else if(n[mid] > key){
high = mid - 1;
}
else{
low = mid + 1;
}
}
return ans;
}

int lastoccur(int n[],int size,int key){
int high = size -1,low = 0,ans = -1,mid;
while(low <= high){
//Potential last element
mid=(low + high) / 2;
if(n[mid] == key){
ans = mid;
low = mid + 1;
}
//Search right half
else if(n[mid] > key){
high = mid - 1;
}
else{
low = mid + 1;
}
}
return ans;
}
int main(){
    int e;

    printf("Enter number of elements: ");
    scanf("%d",&e);
    int n[e];
    printf("Enter %d elements: ",e);
    for(int x = 0; x < e; x++){
        scanf("%d",&n[x]);
        
    }
    
//Bubble Sorting implementation
for(int i = 0; i < e; i++){
    for(int j = 0; j < e - i - 1; j++){
        //Comparison of elements
        if(n[j] > n[j + 1]){
        //Swapping elemnts logic
            int temp = n[j];
            n[j] = n[j + 1];
            n[j + 1] = temp;
        }
    }
}
//Printing the Sorted Array
printf("Sorted Array : \n");
for(int i = 0; i < e; i++){
        printf("%d ",n[i]);
    }
int key;
printf("\nEnter key element: ");  
scanf("%d",&key);  
  
int first = firstoccr(n,e,key);  
int last = lastoccur(n,e,key);  
  
if(first == -1){  
    printf("%d does not exist in Array",key);  
}  
else{  
    printf("Element %d occurs %d times in the entered Array.",key,last - first + 1);  
}  
return 0;
}
