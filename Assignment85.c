#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

int Freq11(int Arr[],int iLength,int iNo)
{
	int i = 0, iCnt = 0 ;

	for(i =0 ;i < iLength ; i++)
	{
		if(Arr[i] == iNo)
		{
			iCnt = iCnt + 1;
		}
		
	}
	return iCnt;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iLength = 0 ;
	int *p = NULL;
	int iValue =0;
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	printf("Enter a no for searching\n");
	scanf("%d",&iValue);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet = Freq11(p,iSize,iValue);
	printf("Frequency of 11 is %d",iRet);
	free(p);
	
	return 0;
}

