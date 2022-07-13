/*
ALGORITHM:
1.two variables are initialized at compile time.
2.evaluate given expression using increment and decrement operators.
3.store the final value in variable 'k'.
*/

// Online C compiler to run C program online
#include <stdio.h>
int main() {
int i=10,j=50,k;
k=++i+j++;
printf("i=%d j=%d k=%d\n",i,j,k);
k=i++-++j;
printf("i=%d j=%d k=%d\n",i,j,k);
k=--i+j++ * i++ -j--;
printf("i=%d j=%d k=%d\n",i,j,k);
k=(i--+ j++);
printf("i=%d j=%d k=%d\n",i,j,k);
}
