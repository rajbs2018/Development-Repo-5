#include<stdio.h>

double FhtoCs(float fFahrenheit)
{
double fCelsius = 0;
fCelsius = (fFahrenheit - 32 )*(0.5555);
return fCelsius;
}

int main()
{
float fValue = 0.0;
double fRet = 0;

printf("Enter Temperature in Fahrenheit:\n");
scanf("%f",&fValue);

fRet = FhtoCs(fValue);
printf("Conversion of Temperature Fahrenheit to Celsius is: %f",fRet);

return 0;
}