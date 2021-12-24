#include<stdio.h>

void RangeDisplay(int,int);

int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter x Value\n");
	scanf("%d",&iValue1);
	
	printf("Enter y Value\n");
	scanf("%d",&iValue2);
	
	RangeDisplays(iValue1,iValue2);
	
	return 0;
	
}

void RangeDisplay(int iStart, int iEnd)
{
	int iCnt =0;
	if(iStart > iEnd)
	{
		printf("Invalide Choice");
	}
	
	for(iCnt=iStart; iCnt <= iEnd; iCnt++)
	{
		printf("Range between iStart And iEnd : %d\n",iCnt);
	}
}