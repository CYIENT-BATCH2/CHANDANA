/*
ALGORITHM:
1.read input in decimal form from the user
2.convert it into hexa decimal form and print it
3.convert it into binary form and print it.
*/
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
