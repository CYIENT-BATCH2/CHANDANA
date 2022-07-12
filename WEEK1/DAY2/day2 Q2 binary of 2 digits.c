#include <stdio.h>

int main() {
    int id,bit;
    printf("enter a random msg id:");
    scanf("%d",&id);
    for(bit=31;bit>=0;bit--)
    printf("%d",(id>>bit)&1);
    return 0;
}