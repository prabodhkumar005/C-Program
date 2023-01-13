
#include <stdio.h>

int main()
{
    int a,b,l;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
    if(l%a==0&&l%b==0)
    break;
    printf("lcm is %d",l);
    return 0;
}
