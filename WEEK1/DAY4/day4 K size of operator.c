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