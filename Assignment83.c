#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int EvenOdd(int Arr[],int iLength)
{
	int i = 0, iCnt1 = 0, iCnt2 = 0 ;

	for(i =0 ;i < iLength ; i++)
	{
		if(Arr[i] == 11)
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
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	bRet = EvenOdd(p,iSize);
	if(bRet == true)
	{
		printf("Number present in Array");
	}
	else
	{
		printf("Number is Missing in Array");
	}
	free(p);
	
	return 0;
}

