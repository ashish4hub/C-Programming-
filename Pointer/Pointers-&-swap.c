//Demonstrates basic Structure, use and implementation of pointers and double pointers in C language. Modifying variable value using pointers. Swap value of two variables.
#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a = 12, b = 3;
    printf("Initially\n");
    printf("a = %d, b = %d\n",a,b);
    
    int *ptrb = &b;
    *ptrb += 6;
    int **pptrb = &ptrb;
    **pptrb = *ptrb * 2;
    
    int *ptra = &a;
    *ptra *= 6;
    int **pptra = &ptra;
    **pptra = *ptra + 10;
    
      swap(&a,&b);
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After operations\n");
    printf("a is %d, b is %d\n",*a,*b);
    }
