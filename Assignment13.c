#include<stdio.h>
#include<stdbool.h>

int DisplayFactor(int iNo)
{
	int i =0;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i ) == 0)
		{
			if((i % 2)==0)
			{
				printf("%d\t",i);
			}
		}
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);

	return 0;
}