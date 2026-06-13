/*

PI = 3.14
Area = PI * r *r

*/

#include<stdio.h>

double CircleArea(float fRadius)
{

    double const PI = 3.14;
    double dArea = 0; 

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter a Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area of a Circle is :  %lf", dRet);

    return 0;
}