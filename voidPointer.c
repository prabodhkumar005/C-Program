#include<stdio.h>
void main()
{
    void *p;
    int a=5;
    p=&a;
    printf("%d",*(int *)p);
    return 0;
}