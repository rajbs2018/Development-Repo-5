#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL check(int iNo)
{
	if((iNo % 5) ==0)
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
	BOOL iRet = FALSE;
	
	printf("Ener a number :");
	scanf("%d",&iValue);
	
	iRet = check(iValue);
	
	if(iRet == TRUE)
	{
		printf("Number is divisibal by 5");
	}
	else 
	{
		printf("Not Divisile");
		
	}
	
	return 0;
}