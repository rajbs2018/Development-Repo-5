#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("Entered number is Even");
	}
	else
	{
		printf("Odd number");
	}
	
	return 0;
}