#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;

int LastOccurance(int Arr[],int iLength, int iNo)
{
	int i = 0, iCnt1 = 0 ;

	for(i = iLength - 1;i >= 0 ; i--)
	{
		if(Arr[i] == iNo)
		{
			iCnt1 = iCnt1 + i;
			break;			
		}
		
	}
	return iCnt1;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iLength = 0 ;
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
	iRet = LastOccurance(p,iSize,iValue);
	
		printf("True : %d",iRet);
	
	free(p);
	
	return 0;
}

