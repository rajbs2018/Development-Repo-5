#include<stdio.h>

int DisplayConvert(char c)
{	
		if((c > 'a') && (c < 'z'))
		{
			printf("Converted Character to capital is : %c",c - 32);
		}
		else if((c > 'A') && (c < 'Z'))
		{
			printf("Converted Character to small is : %c",c + 32);			
		}
}
int main()
{
	char cValue = 0;
	
	printf("Enter A character\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);

	return 0;
}