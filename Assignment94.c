#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;

int Digit(int Arr[],int iLength)
{
	int i = 0, j = 0, iCnt1 = 0, iCnt2 = 0;

	for(i = 0;i < iLength ; i++)
	{	
		if((Arr[i] > 100) && (Arr[i] <= 999))
		{
			printf("Less than 3 is : %d\n",Arr[i]);
		}
		
	}
	
	return iCnt2;
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
	iRet = Digit(p,iSize);
	
	free(p);
	
	return 0;
}

