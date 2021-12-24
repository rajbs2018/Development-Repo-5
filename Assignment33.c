#include<stdio.h>

int KMtoMeter(int iValue)
{

int iDist = 0;
iDist=(iValue*1000);
return iDist;
}

int main()
{
int iValue1 = 0.0;
int iRet = 0;

printf("Enter fValue1:\n");
scanf("%d",&iValue1);

iRet = KMtoMeter(iValue1);
printf("Conversion Of Km to Meter is: %d",iRet);

return 0;
}