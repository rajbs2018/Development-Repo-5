#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;

int Diff(int Arr[],int iLength)
{
	int i = 0, iCnt1 = Arr[0], iCnt2 = 0, iDiff = 0 ;

	for(i = 0;i < iLength ; i++)
	{
		if(Arr[i] < iCnt1 )
		{
			iCnt1 = Arr[i];
						
		}
		if (Arr[i] > iCnt2)
		 {
			 iCnt2 = Arr[i];
		 }
		
		iDiff = iCnt1 - iCnt2;
	}
	return iDiff;
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
	iRet = Diff(p,iSize);
	printf("\n%d\t",iRet);
	
	free(p);
	
	return 0;
}

