//Program: Displays Month and Next Month
//Author: Ashish Kumar
//Working: Takes month number (1-12) as input from user and prints the month and the next month.

#include<stdio.h>
int main(){
    char month[12][10] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    
    printf("Enter month number: ");
    scanf("%d",&i);
    if(i<1 || i>12){
      printf("Invalid Month Value!");
    }
    else if (i != 12){
      printf("%s is the month at %d number and it is followed by %s",month[i-1],i,month[i]);
    }
    else if (i==12){
        printf("%s is the month at number %d and it is followed by %s",month[i-1],i,month[0]);
    }
    
}
