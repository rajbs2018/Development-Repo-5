#include<stdio.h>
#include<stdbool.h>

int CountEven(int iNo)
{
	int i =0, iDigit = 0, iCnt =0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2) == 0)
			{
				iCnt++;
			}
			
			iNo = iNo / 10;
			
			printf("%d\n", iDigit);
		}
	
	return iCnt;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter A number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Count of even number is : %d",iRet);

	return 0;
}