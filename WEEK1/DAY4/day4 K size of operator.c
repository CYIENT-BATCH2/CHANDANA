/*
ALGORITHM:
1.by using sizeof operator,find the size of the each data type and print it
2.take the variables belongs to all data types
3.find the sizeof the each  variable and print it.
*/


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a;int b;float c;double d;
    /*size of data types*/
    printf("%ld\n",sizeof(char));
    printf("%ld\n",sizeof(int));
    printf("%ld\n",sizeof(float));
    printf("%ld\n",sizeof(double));
    /*size of variables*/
    printf("%ld\n",sizeof(a));
    printf("%ld\n",sizeof(b));
    printf("%ld\n",sizeof(c));
    printf("%ld\n",sizeof(d));
    return 0;
}
