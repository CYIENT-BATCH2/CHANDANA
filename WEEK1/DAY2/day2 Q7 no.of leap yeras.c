/*
ALGORITHM:
1.read the years from the user.
2.find whether the year is leap or not
3.if it is a leap year,count the year
4.calculate total number of leap years and print it.
*/


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
