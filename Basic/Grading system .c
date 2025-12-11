#include<stdio.h>
int main(){

    int marks;
    char name1[20],name2[20];
//User name 
    printf("ENTER YOUR FULL NAME: ");
    scanf("%s %s",name1,name2);
//User marks
    printf("\nENTER YOUR MARKS: ");
    scanf("%d",&marks);
//Grading logic
    if(marks >= 0 && marks < 33){
        printf("\nGRADE: F (FAIL)");
    }
    else if(marks >= 33 && marks < 60){
        printf("\nGRADE: B (PASS)");
        printf("\nFEEDBACK: IMPROVEMENT REQUIRED");
    }
    else if(marks >= 60 && marks < 80){
        printf("\nGRADE: A (PASS)");
        printf("\nFEEDBACK: NEED MORE PRACTICE");
    }
    else if(marks >= 80 && marks < 90){
        printf("\nGRADE: A+ (PASS)");
        printf("\nFEEDBACK: VERY GOOD");
    }
    else if (marks >= 90 && marks <= 100){
        printf("\nGRADE: A++ (PASS)");
        printf("\nFEEDBACK: PERFECT");
        }
        // Marks rage (0 to 100)
        else {
            printf("\nINVALID MARKS");
            printf("\nMARKS RANGE (0-100)");
        }
        printf("\nNAME: %s %s",name1,name2);
}




