// Online C compiler to run C program online
#include <stdio.h>
int main() {
int i=10,j=2,k;
printf("k=%d\n",i<<j);
printf("k=%d\n",i>>j);
printf("k=%d\n",(i&&j)<<j);
printf("k=%d\n",(i||j)>>j);
printf("k=%d\n",(i&j)<<i);
printf("k=%d\n",(i||j&&i));
}