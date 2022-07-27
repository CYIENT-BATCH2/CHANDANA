// Online C compiler to run C program online
/*
ALGORITHM:
1.read an variable named as ADCONO
2.set the bit positions of 4,7 and 8.
3.findout the biot positions of 4,7 and 8. and print it.
*/

#include <stdio.h>
int main() {
    // Write C code here
    int ADCON0=0x06,CMCON;
   ADCON0=ADCON0|(1<<4);
    ADCON0=ADCON0|(1<<7);
    ADCON0=ADCON0|(1<<8);
    printf("CIS is %d\n",(ADCON0>>4)&1);
    printf("C1OUT is %d\n",(ADCON0>>7)&1);
    printf("C2OUT is %d\n",(ADCON0>>8)&1);
    return 0;
}
