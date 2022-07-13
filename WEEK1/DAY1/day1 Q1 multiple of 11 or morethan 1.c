/*
algorithm:
1.read a number as input from the user
2.check whether the number is multiple of 11 or morethan one of multiple of 11
3.if it is multiple,print as SPECIAL.
*/

#include <stdio.h>
int main() {
    int n;
    printf("enetr a number:");
    scanf("%d",&n);
    if((n>0)&&((n%11==0)||(n%11==1)))
    {
        printf("SPECIAL");
    }
    
    return 0;
}
