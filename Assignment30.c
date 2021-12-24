#include<stdio.h>
#include<stdbool.h>

int CountRange(int iNo)
{
	int i =0, iDigit = 0;
	int	iCnt1 =0, iCnt2 = 0;
	int iSum1 =0, iSum2 =0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2) == 0)
			{
				iSum1 = iSum1 + iDigit;
			}
			else
			{
				iSum2 = iSum2 + iDigit;
			}
			
			iNo = iNo / 10;
			
			printf("%d\n", iDigit);
		}
	
	return iSum1 - iSum2;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	iRet = CountRange(iValue);
	printf("Summetion Of even and Odd Digit is : %d",iRet);

	return 0;
}