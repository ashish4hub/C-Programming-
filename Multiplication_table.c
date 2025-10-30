#include<stdio.h>
int main() {
    int i,a;
    printf ("ENTER ANY NUMBER:\n");
    scanf ("%d",&a);
    printf ("The multiplication table of %d is - \n",a);
for(i=1; i<=10; i++){
    printf ("%d × %d = %d \n",a,i,a*i);
}
    return 0;
    
}
