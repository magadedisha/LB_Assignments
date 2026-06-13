/*

Area = wd * ht

*/

#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{

    double dArea = 0; 

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter a Width : ");
    scanf("%f",&fValue1);

    printf("Enter a Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("The Area of a Circle is :  %lf", dRet);

    return 0;
}