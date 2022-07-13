/*
ALGORITHM:
1.two variables are initialized at compile time.
2.evaluate given expression using relational operators
3.store the final value in variable 'z'.

*/
// Online C compiler to run C program online
#include <stdio.h>
int main() {
int x=10,y=20,z;
printf("z=%d\n",x<y);
printf("z=%d\n",x>y);
printf("z=%d\n",x<=y);
printf("z=%d\n",(x*x-y)>(y*y-x));
printf("z=%d\n",(x*x*x)<(y*x*x));
printf("z=%d\n",((x*y)!=(y*x)));
printf("z=%d\n",((x*y)==(y*x)));
}
