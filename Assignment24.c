#include<stdio.h>
#include<stdbool.h>

int CountFour(int iNo)
{
	int i =0, iDigit = 0, iCnt =0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit == 4)
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
	
	iRet = CountFour(iValue);
	printf("Frequency of Four : %d",iRet);

	return 0;
}