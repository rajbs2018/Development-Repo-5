#include<stdio.h>
void Display(int iNo, int iFrequency)
{
	int i =0;
	for(i = 0; i <iFrequency; i++)
	{
		printf("%d\t",iFrequency);
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue1);
	
	printf("Enter A number\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}