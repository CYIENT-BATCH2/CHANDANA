#include <stdio.h>

int main() 
{
    int n,bit;
    printf("enter hexa decimal number:");
    scanf("%X",&n);
    printf("enter bit value:");
    scanf("%d",&bit);
    printf("after shifting %x",(n>>bit));
}