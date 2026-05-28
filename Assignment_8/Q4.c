/*
    1 Ceclcius =  (Farebheit - 32) *  (5/9)
*/
#include<stdio.h>

double FhToCs(float fTemp)
{
    float fCelcius = 0.0f;
    
    fCelcius = (fTemp - 32) * (5.0/9.0);

    return fCelcius;
}
int main()
    {
        float fValue = 0.0f;
        double iRet = 0.0;

        printf("ENter a Temperatur in Farenheit : ");
        scanf("%f",&fValue);

        iRet = FhToCs(fValue);

        printf("The temperature in Celcius is : %lf",iRet);
        return 0;
    }
