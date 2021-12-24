#include<stdio.h>
#include<stdbool.h>

int RevFactor(int iNo)
{
	int i =0, iMul =1;
	for(i = iNo; i > 0; i--)
	{
		if((iNo % i ) == 0)
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
	
	RevFactor(iValue);

	return 0;
}