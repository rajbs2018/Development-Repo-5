#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	
	for(i =1; i <= iNo; i++)
	{
		printf("*\n");
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