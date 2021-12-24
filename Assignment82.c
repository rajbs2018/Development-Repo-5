#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int EvenOdd(int Arr[],int iLength)
{
	int i = 0, iCnt1 = 0, iCnt2 = 0 , iFreq = 0;

	for(i =0 ;i < iLength ; i++)
	{
		if((Arr[i] % 2) == 0)
		{
			iCnt1 = iCnt1 + 1 ;		
		}
		else
		{
			iCnt2 = iCnt2 +1;
		}
		
		iFreq = iCnt1 - iCnt2;
	}
	return iFreq;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iLength = 0 ;
	int *p = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet = EvenOdd(p,iSize);
	printf("Multiple of 11 is :%d\n",iRet);	
	free(p);
	
	return 0;
}

