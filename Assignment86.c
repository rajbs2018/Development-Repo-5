#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;

int EvenOdd(int Arr[],int iLength, int iNo)
{
	int i = 0, iCnt1 = 0, iCnt2 = 0 ;

	for(i =0 ;i < iLength ; i++)
	{
		if(Arr[i] == iNo)
		{
			return true;		
		}
		
	}
	return false;
}

int main()
{
	int iSize = 0, bRet = false, iCnt = 0, iLength = 0 ;
	int *p = NULL;
	int iValue = 0;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	printf("Enter Searching Number :");
	scanf("%d",&iValue);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	bRet = EvenOdd(p,iSize,iValue);
	if(bRet == true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	free(p);
	
	return 0;
}

