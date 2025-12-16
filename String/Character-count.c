//FUNCTION TO COUNT NUMBER OF CHARACTERS IN THE NAME INPUT BY USER
// DEMONSTRATES READING STRING USING fgets(), AND COUNTING ELEMENTS OF THE STRING
#include<stdio.h>
int countlength(char arr[]);
int main (){
    char name[100];
    printf("ENTER YOUR NAME: ");
    fgets(name, 100, stdin);//Input name
    printf("YOUR NAME HAS %d WORDS", countlength(name));
    return 0;
    
}
int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
}
return count - 1; //Not includes/counts null characters i.e., '\n', '\0' which strings stores in the last position
}
