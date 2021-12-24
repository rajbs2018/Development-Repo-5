#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;

int Digit(int Arr[],int iLength)
{
	int i = 0, iCnt1 = Arr[0], iCnt2 = 0, iAdd = 0 ;

	for(i = 0;i < iLength ; i++)
	{
		while(Arr[i] > 0)
		{
			iCnt1 = Arr[i] % 10;
			iAdd = iAdd + iCnt1;
			Arr[i] = Arr[i] / 10;
			
		}
	printf("Addition of digit is : %d\n",iAdd);
	iAdd = 0;
	}
	
	return iAdd;
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
	printf("\n%d\t",iRet);
	
	free(p);
	
	return 0;
}

