#include<stdio.h>

double CircleArea(float fRadius)
{
	float PI = 3.14 ;
	double dArea = 0;
	dArea = (PI * fRadius * fRadius);
	return dArea;
}

int main()
{
	float fValue = 0.0 ;
	double dRet = 0 ;
	
	printf("Enter Radius :\t");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	printf("Area of Circle is : %f",dRet);
	
	return 0;
}