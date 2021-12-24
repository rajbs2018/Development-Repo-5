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
		if((Arr[i] % 5) == 0)
		{
			iCnt = Arr[i] ;		
		}

	}
	return iCnt;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iLength = 0 ;
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iLength);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		printf("Enter element : %d\n", iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p,iSize);
	
	printf("Result  is : %d",iRet);
	
	free(p);
	
	return 0;
}

