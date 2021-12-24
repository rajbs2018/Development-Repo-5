#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char c)
{
	if((c > 'A') ==(c < 'Z'))
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
	
	printf("Enter the characte :\n");
	scanf("%c",&cValue);
	
	bRet = ChkCapital(cValue);
	
	if(bRet == TRUE)
	{
		printf("Capital Character");
	}
	else
	{
		printf("Not a Capital character");
	}
	
	return 0;
	
}