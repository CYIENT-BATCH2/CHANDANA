// Online C compiler to run C program online
#include <stdio.h>
int main() {
 int n;
 printf("Total no.of leap years are %d\n",(2022-1990)/4);
 printf("leap years are:");
 for(n=1990;n<=2022;n++)
 {
    if(n%4==0)
    printf("%d ",n);
 }
 
}