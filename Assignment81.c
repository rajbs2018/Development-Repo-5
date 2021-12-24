#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountEven(int Arr[],int iLength)
{
	int i = 0, iCnt = 0, iEven = 0;

	for(i =0 ;i < iLength ; i++)
	{
		if((Arr[i] % 2) == 0)
		{
			iCnt = iCnt + 1 ;		
		}
	}
	return iCnt;
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
	iRet = CountEven(p,iSize);
	printf("Even Count is :%d\n",iRet);	
	free(p);
	
	return 0;
}

