//Store the multiplication table of 2 and 3 in 2-D Array in a separate function.
//Concepts: 2D array initialisation & declaration, passing 2-D Array into a function, Function call by reference
#include<stdio.h>
void store_table(int arr[][10], int n,int m, int num);
int main(){
    int table[2][10]; //Number of columns must be specified in a 2D array, number of rows can be left empty.
    store_table(table,0,10,2); // Calling store_table function for table of 2
    printf("\n");
    store_table(table,1,10,3); // Calling store_table function again for table of 3
    return 0;
}
//defining store_table function
// n is the Row number
void store_table(int arr[][10], int n,int m, int num){ 
    for(int i = 0; i < m; i++){
        arr[n][i] = num * (i+1);
        printf("%d\t",arr[n][i]);
    }
}

