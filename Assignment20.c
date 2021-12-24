#include<stdio.h>
#include<stdbool.h>

int MulFactor(int iNo)
{
	int i =0, iSum =1, iSub = 0, iDiff = 0;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i ) == 0)
		{
			iSum = iSum + i;
		}
		else 
		{
			iSub = iSub + i;
		}
		
	}
	iDiff = iSum - iSub;
	return iDiff;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	iRet = MulFactor(iValue);
	printf("Summation of facto and non factor : %d",iRet);

	return 0;
}