#include<stdio.h>
#include<stdbool.h>

int CountMul(int iNo)
{
	int i =0, iDigit = 0, iCnt =0,iMul = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			iMul = iMul * iDigit;
				
			iNo = iNo / 10;
			
			printf("%d\n", iDigit);
		}
	
	return iMul;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	iRet = CountMul(iValue);
	printf("Multiplication of all digit is : %d",iRet);

	return 0;
}