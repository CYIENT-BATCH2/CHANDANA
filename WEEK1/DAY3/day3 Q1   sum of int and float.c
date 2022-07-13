// Online C compiler to run C program online
/*
ALGORITHM:
1.read 8 integers and 7 float numbers from the user.
2.calculate sum,average and mean of integers
3.calculate sum,average and mean of float numbers
4.divide sum of float with sum of int
5.divide avg of float with avg of int
6.typecast all float values into integers.


*/

#include <stdio.h>

int main() {
   int n1,n2,n3,n4,n5,n6,n7,n8,sum1;
   float f1,f2,f3,f4,f5,f6,f7,avg1,sum2,avg2,mean1,mean2;
   printf("enter 8 integer values:");
   scanf("%d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
   printf("enter 7 float values:");
   scanf("%f %f %f %f %f %f %f",&f1,&f2,&f3,&f4,&f5,&f6,&f7);
    sum1=(n1+n2+n3+n4+n5+n6+n7+n8);
    avg1=(sum1)/8;
    mean1=(avg1)/2;
    printf("SUM-1 is %d AVG-1 is %f MEAN-1 is %f\n",sum1,avg1,mean1);
    sum2=(f1+f2+f3+f4+f5+f6+f7);
    avg2=(sum2)/7;
    mean2=(avg2)/2;
    printf("SUM-2 is %f AVG-2 is %f MEAN-2 is %f\n",sum2,avg2,mean2);
    printf("division of both sums is %f\n:",(sum1/sum2));
    printf("divisions of averages is %f\n:",(avg1/avg2));
    printf("%d %d %d %d %d %d %d\n",((int)f1),((int)f2),((int)f3),((int)f4),((int)f5),((int)f6),((int)f7));
    return 0;
}
