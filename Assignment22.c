#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0


typedef int BOOL;
int ChkZero(int iNo)
{
	int i =0, iDigit = 0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit == 0)
			{
				return TRUE;
			}
			
			iNo = iNo / 10;
			
			printf("%d\n", iDigit);
			
		}
	
	return iNo;
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE ;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no zero");
	}
	return 0;
}