#include<stdio.h>
#include<stdbool.h>

int MulFactor(int iNo)
{
	int i =0, iMul =1;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i ) == 0)
		{
			iMul = iMul * i;
			printf("%d\t",i);
		}
	}
	printf("Multiplication of factor is : %d",iMul);
}
int main()
{
	int iValue = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	MulFactor(iValue);

	return 0;
}