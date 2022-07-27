// Online C compiler to run C program online
/*
ALGORITHM:
1.take one byte of data.
2.find whether it is little endian or big endian.
3.if it is little endian convert it to big endian.
*/

#include <stdio.h>

int main() {
    // Write C code here
   char num;
   printf("enter a number:\n");
   scanf("%d",&num);
   char *ptr=&num;
   if(*ptr==num)
   printf("LITTILE ENDIAN\n");
   printf("we can't convert CPU byte order from littile endian to big endian");
    return 0;
}
