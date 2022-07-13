// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,n;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    (a>b)?printf("a is big"):printf("b is big");
    printf("\n");
    printf("enter a number\n");
    scanf("%d",&n);
    (n%2==1)?printf("odd:"):printf("even:");
    printf("\n");
    (n>0)?printf("positive number:"):printf("negative number:");
    return 0;
}