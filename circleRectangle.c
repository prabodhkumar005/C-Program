#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float radias);
float rectanglerArea(float a,float b);
int main()
{ float side=5.0;
printf("area of square is:%f",squareArea(side));

    return 0;

}
float squareArea(float side)
{
    return side*side;
}
float circleArea( float radias)
{
    return 3.14*radias*radias;
}
float rectanglerArea(float a,float b)
{
    return a * b;
}