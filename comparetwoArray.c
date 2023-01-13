#include<stdio.h>
int main()
{
    int a[1],b[1],i;
    for(i=0;i<1;i++)
    {
        printf("enter the elements of two arrays\n");
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<1;i++)
    {
        if(a[i]==b[i])
        {
            printf("both arrays are same");
            break;
        }
        else
        {
            printf("both arrays are not same");
            break;
        }
    }
return 0;
}