#include<stdio.h>

int RangeSumEven(int,int);

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter x Value\n");
	scanf("%d",&iValue1);
	
	printf("Enter y Value\n");
	scanf("%d",&iValue2);
	
	iRet = RangeSumEven(iValue1,iValue2);
	printf("Sum Of Range between iStart And iEnd : %d\n",iRet);
	
	return 0;
	
}

int RangeSumEven(int iStart, int iEnd)
{
	int iCnt =0 , iSum = 0;
	if(iStart > iEnd)
	{
		printf("Invalid Choice");
	}
	if(iStart <0)
	{
		printf("Wrong Input");
	}
	
	for(iCnt=iStart; iCnt <= iEnd; iCnt++)
	{
		if((iCnt % 2)==0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}