#include <stdio.h>

int main() 
{
    int n=0xFE;
    printf("%d\n",n);
    printf("%X",(n>>3));
}