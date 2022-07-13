/*
ALGORITHM:
1.three variables are initialized at compile time.
2.evaluate given expression using arithmetic operators
3.store the final value in variable 'k'.
*/


// Online C compiler to run C program online
#include <stdio.h>
int main() {
int x=30, y=20, z=10,k;
/*ARITHMATICAL OPERATOR*/
printf("k=%d\n",x+y*z/4%2-1);
printf("k=%d\n",x% y+z*z);
printf("k=%d\n",x*x-y/z);
printf("k=%d\n",x+y/z-y);
printf("y=%d",x+y-(x=y));
//printf("y=%d",x+y-x=y);
}
