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