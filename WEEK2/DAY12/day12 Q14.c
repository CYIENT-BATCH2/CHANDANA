// Online C compiler to run C program online

/*
1.taking  three different arrays 
2.checking each element with fallow of three loops checking the combinations ofg three arrays
3.print if any common elements found
*/
#include <stdio.h>
int main() {
    // Write C code here
    int a[4]={10,20,30,40},b[4]={1,2,10,20},c[4]={30,40,50,60};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                if((a[i]==b[j])||(a[i]==c[k]))
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
