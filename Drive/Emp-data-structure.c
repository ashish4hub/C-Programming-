//C program to calculate salary of employees by the number of working hours
// Concepts: Array, structure, reading and storing structure data using array
#include<stdio.h>
typedef struct employee{
    int id;
    float hours,rate,salary;
    char name[30];
}emp;
int main(){
    int n;
    printf("ENTER NUMBER OF EMPLOYEES\n");
    scanf("%d",&n);
    emp emply[n];
    for(int i = 0;i < n; i++){
        printf("NAME OF EMP %d\n",i+ 1);
        scanf("%s",emply[i].name);
        printf("ID OF EMP %d\n",i + 1);
        scanf("%d",&emply[i].id);
        printf("WORKING HOURS OF EMP %d\n",i + 1);
        scanf("%f",&emply[i].hours);
        printf("RATE PER HOUR OF EMP %d\n",i + 1);
        scanf("%f",&emply[i].rate);
        emply[i].salary = emply[i].hours * emply[i].rate;
        printf("\n");
        printf("EMP NAME: %s\nEMP ID: %d\nSALARY: %.2f\n",emply[i].name,emply[i].id,emply[i].salary);
        printf("\n");
    }
    return 0;
}
