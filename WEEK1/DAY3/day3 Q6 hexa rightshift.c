/*
ALGORITHM:
1.read hexadecimal value from the user
2.read the value from the user howmany times you want to shift
3.print the value after shifting.
*/
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
