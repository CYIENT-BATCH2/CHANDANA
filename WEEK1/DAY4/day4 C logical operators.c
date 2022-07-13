// Online C compiler to run C program online
#include <stdio.h>
int main() {
int i=10,j=20,k;
printf("k=%d\n",i&&j);
printf("k=%d\n",i||j);
printf("k=%d\n",!i);
{
    int i=10,j=0,k;
    k=i&&(j=20);
    printf("i=%d j=%d k=%d\n",i,j,k);
    k=i||(j=20);
    printf("i=%d j=%d k=%d\n",i,j,k);  
}
{
    int i=10,j=20,k=0,l;
    printf("l=%d\n",i&&j||j&&k);
    printf("l=%d\n",i||j&&i||k);
}
}