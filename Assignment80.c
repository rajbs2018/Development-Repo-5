#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[],int iLength)
{
	int i = 0, iCnt = 0;

	for(i =0 ;i < iLength ; i++)
	{
		if((Arr[i] % 11) == 0)
		{
			iCnt = Arr[i] ;	
			printf("Multiple of 11 is :%d\n",iCnt);			
		}

	}
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iLength = 0 ;
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p,iSize);
	free(p);
	
	return 0;
}

