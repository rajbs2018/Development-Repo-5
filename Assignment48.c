#include<stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0, iCnt2 = 0;
	
	for(iCnt1 =1;iCnt1 <= iRow; iCnt1++)
	{
		
		for(iCnt2 = iCol; iCnt2 >= 1 ; iCnt2--)
		{
	
				printf("%*\t",iCnt2);
		}
			printf("\n",iCnt1);
	}
	
}

int main()
{
	
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of Rows and colomns\n");
	scanf("%d %d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}