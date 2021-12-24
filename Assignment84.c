#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

int Freq11(int Arr[],int iLength)
{
	int i = 0, iCnt = 0 ;

	for(i =0 ;i < iLength ; i++)
	{
		if(Arr[i] == 11)
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
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n ",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet = Freq11(p,iSize);
	printf("Frequency of 11 is %d",iRet);
	free(p);
	
	return 0;
}

