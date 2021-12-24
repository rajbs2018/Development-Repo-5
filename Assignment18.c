#include<stdio.h>
#include<stdbool.h>

int NonFactor(int iNo)
{
	int i =0, iMul =1;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i ) == 0)
		{
		}
		else 
		{
			printf("%d\t",i);
		}
	}
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	NonFactor(iValue);

	return 0;
}