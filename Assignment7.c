#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	
	while( iNo > 0)
	{
		printf("*");
		iNo--;
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}