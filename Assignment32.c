#include<stdio.h>

double RectArea(float fHeight, float fWidth)
{
double fArea = 0;
fArea=(fHeight*fWidth);
return fArea;
}

int main()
{
float fValue1 = 0.0, fValue2 = 0.0;
double fRet = 0;

printf("Enter fValue1:\n");
scanf("%f",&fValue1);

printf("Enter fValue2:\n");
scanf("%f",&fValue2);

fRet = RectArea(fValue1,fValue2);
printf("Area of Reactangle is : %f",fRet);

return 0;
}