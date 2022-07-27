// Online C compiler to run C program online
/*
1.initialisation  with compile time array having its column size is 10
2.using string compare function checking empty string
3. after finding replace that empty array to "CYIENT" 
4.print the array after  modification.

*/
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int rows,cols;
    char a[][10]={"hyderabad","bangalore","kolkatta","","kolkatta"};
    rows=(sizeof(a)/sizeof(a[0]));
    cols=(sizeof(a[0])/sizeof(a[0][0]));
    for(int i=0;i<rows;i++)
    { 
            if(!(strcmp(a[i],"")))
            {
                printf("empty position is %d index\n ",i);
                strcpy(a[i],"CYIENT");
            }
    }
    printf("after filling empty string:\n");
    for(int i=0;i<rows;i++)
    {
            printf("%s ",a[i]);
        
    }
    return 0;
}
