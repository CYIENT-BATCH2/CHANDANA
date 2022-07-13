/*
ALGORITHM:
1.take 5 variables and assign the values at run time(in single digit only)
2.check whether the values or even or odd
3.print each value of the variable is as even or odd
*/

#include <stdio.h>
int main() {
    int n1,n2,n3,n4,n5;
    printf("enter the numbers for balls:");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    if(n1%2==0)
    printf("n1 is even\n");
    else
    printf("n1 is odd\n");
    if(n2%2==0)
    printf("n2 is even\n");
    else
    printf("n2 is odd\n");
    if(n3%2==0)
    printf("n3 is even\n");
    else
    printf("n3 is odd\n");
    if(n4%2==0)
    printf("n4 is even\n");
    else
    printf("n4 is odd\n");
    if(n5%2==0)
    printf("n5 is even\n");
    else
    printf("n5 is odd\n");
    
}
