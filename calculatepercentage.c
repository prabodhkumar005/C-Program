#include<stdio.h>
int calculatepercentage(int phy,int che,int math);
int main()
{int phy=92;
int che=94;
int math=98;
printf("percentage is:%d",calculatepercentage(phy,che,math));
    return 0;
}
int calculatepercentage(int phy,int che,int math)
{
    return ((phy+che+math)/3);
}