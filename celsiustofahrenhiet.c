#include<stdio.h>
float convertTemp(float celcius);
int main()
{
    float Far=convertTemp(37);
    printf("Far:%f",Far);
    return 0;
}
float convertTemp(float celcius)
{
float Far=(celcius*9.0/5.0)+32;
return Far;}