#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
  {  printf("\nEnter value of 2d array:");
    scanf("%d",&a[i][j]);}
    printf("2D array element are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
    }
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\nLEFT DIAGONAL ELEMENT ARE:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(i==j)
        printf("%d\t",a[i][j]);
    }
    printf("\nRIGHT DIAGONAL ELEMENT ARE:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(i+j==2)
        printf("%d\t",a[i][j]);
    }
    return 0;


}