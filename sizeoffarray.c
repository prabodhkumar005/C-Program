#include<stdio.h>
int main()
{
    int a[]={56,5,65,85,95,45,84,2,5,4,8,35,62,45,84};
    printf("%d",sizeof(a)/sizeof(a[0]));
    return 0;
}