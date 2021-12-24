#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char c)
{
	if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u')
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
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter a charatcer\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("Not Vowel");
	}
	
	return 0;
}