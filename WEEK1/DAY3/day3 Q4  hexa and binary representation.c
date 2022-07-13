#include <stdio.h>

int main() 
{
    int n=204,i;
    printf("HEXADECIMAL representation is %X\n",n);
    printf("BINARY representation is:");
    for(i=31;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
    }
}