#include<stdio.h>
#include<stdbool.h>

int CountRange(int iNo)
{
	int i =0, iDigit = 0, iCnt =0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if((iDigit > 3) && (iDigit < 7))
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
	
	iRet = CountRange(iValue);
	printf("Range of 3 o 7 number is : %d",iRet);

	return 0;
}