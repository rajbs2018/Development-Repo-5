#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
{
	int i =0, iDigit = 0, iCnt =0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit == 2)
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
	
	iRet = CountTwo(iValue);
	printf("Frequency of two : %d",iRet);

	return 0;
}