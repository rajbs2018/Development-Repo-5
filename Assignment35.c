#include<stdio.h>

double SqureMeter(int iValue)
{
	double dArea = 0;
	dArea = (iValue * (0.0929));
	return dArea;
}

int main()
{
	int iValue = 0.0 ;
	double dRet = 0 ;
	
	printf("Enter area in squre feet :\t");
	scanf("%f",&iValue);
	
	dRet = SqureMeter(iValue);
	printf("Conversion of Square feet to Square Meter : %d",dRet);
	
	return 0;
}