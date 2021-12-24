#include<stdio.h>

void RangeDisplayRev(int,int);

int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter x Value\n");
	scanf("%d",&iValue1);
	
	printf("Enter y Value\n");
	scanf("%d",&iValue2);
	
	RangeDisplayRev(iValue1,iValue2);
	
	return 0;
	
}

void RangeDisplayRev(int iStart, int iEnd)
{
	int iCnt =0;
	if(iStart > iEnd)
	{
		printf("Invalide Choice");
	}
	
	for(iCnt=iEnd; iCnt >= iStart; iCnt--)
	{
		printf("EvenRange between iStart And iEnd : %d\n",iCnt);
	}
}