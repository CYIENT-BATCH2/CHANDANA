// Online C compiler to run C program online
/*
1.read a variable named as SSPSTAT.
2.clear the bit positions of 4,5 and 7.
3.find out the bit postions of 1,2 and 8.
*/
#include <stdio.h>
int main() {
    // Write C code here
    int SSPSTAT=0x55;
    SSPSTAT=SSPSTAT&(~(1<<4));
    SSPSTAT=SSPSTAT&(~(1<<5));
    SSPSTAT=SSPSTAT&(~(1<<7));
    printf("UA is %d",(SSPSTAT>>1)&1);
     printf("BF is %d",(SSPSTAT>>2)&1);
      printf("SMP is %d",(SSPSTAT>>8)&1);
    return 0;
}
