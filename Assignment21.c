#include<stdio.h>
#include<stdbool.h>

int CountEven(int iNo)
{
	int i =0, iDigit = 0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			iNo = iNo / 10;
			
			printf("%d\n", iDigit);
		}
	
	return iNo;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Summation of factor and non factor : %d",iRet);

	return 0;
}