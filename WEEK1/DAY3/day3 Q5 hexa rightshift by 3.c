/*
ALGORITHM:
1.read hexadecimal value 
2.right shift it by 3 times
3.print the value after shifting.
*/
#include <stdio.h>
int main() 
{
    int n=0xFE;
    printf("%d\n",n);
    printf("%X",(n>>3));
}
