#include<stdio.h>
int main (){
  
    //Define variables
    int x[100],n,key,found=0,i;

    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);

    //Storing the input array
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("Enter the key element to search: ");
    scanf("%d",&key);

    //Linear search
    for(i=0;i<n;i++){
        if(x[i]==key){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element %d found at position %d in the defined array",key,i+1);
    }
    else{
        printf("Not found ! No such element is detected in the defined array");
    }
    
   return 0; 
}
