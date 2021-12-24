#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
{
	int i = 0, iSum = 1;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i ) == 0)
		{
			
		}
		else
		{
			iSum =iSum + i;
		}
	}
	printf("\nSummation of factor is : %d",iSum);
}
int main()
{
	int iValue = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	SumFactor(iValue);

	return 0;
}