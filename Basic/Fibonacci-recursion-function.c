// Prints number for the entered postion value in Fabonacci sequence 
// Demostrates basic use and implementation of Recursion in C programming (program suitable for small values i.e., 4,6,9)
#include<stdio.h>
int fib(int n); //function declaration 

int main (){
    int n;
    printf("Enter position: ");
    scanf("%d",&n);
    printf("\n%d occurs at position %d in Fibonacci sequence.",fib(n),n);
}
//Defining function 
int fib(int n){ 
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int fibn1 = fib(n - 1);
    int fibn2 = fib(n - 2);
    int fibn = fibn1 + fibn2;
    return fibn;
}
