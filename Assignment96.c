#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char c)
{
	if((c > 'a') ==(c < 'z'))
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
	
	bRet = ChkAlpha(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Character");
	}
	else
	{
		printf("Not a character");
	}
	
	return 0;
	
}