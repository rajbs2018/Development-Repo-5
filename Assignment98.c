#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char c)
{
	if((c > '0') && (c < '9'))
	{
		return 1;
	}
	else 
	{ 
		return 0;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = false;
	
	printf("Enter the character :\n");
	scanf("%c",&cValue);
	
	bRet = ChkDigit(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Number");
	}
	else
	{
		printf("Not a Number");
	}
	
	return 0;
	
}