/*
ALGORITHM:
1.three variables are initialized at compile time.
2.evaluate given expression using bitwise operators.
3.store the final value in variable 'k'.
*/

// Online C compiler to run C program online
#include <stdio.h>
int main() {
int i=10,j=20,m=5,k;
printf("k=%d\n",i&j);
printf("k=%d\n",i|j);
printf("k=%d\n",i^j); 
printf("k=%d\n",i&&j|m&&j);
printf("k=%d\n",i||j&m&&i);
printf("k=%d\n",i&j|j||m);
{
    int i=10,j=20,k=30;
    printf("k=%d\n",i&&j&k);
    printf("k=%d\n",i&j|k&&i);
    printf("k=%d\n",i||j&j);
    printf("k=%d\n",i||j&(j&&k));
}
}
