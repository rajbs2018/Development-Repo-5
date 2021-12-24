#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	char ch = 'A';
	int i = 0, j =0;
	
	for(i= 1 ; i <= iRow; i++)
	{
		for(j=1; j <= iCol; j++)
			
		{
		    printf("%c\t",ch);
		}
			ch++;
			printf("\n");
	}
}

int main()
{
	int iValue1 =0, iValue2 =0;
	
	printf("Enter No of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter No of Colomn\n");
	scanf("%d",&iValue2);
	
	
	Pattern(iValue1,iValue2);
	
	return 0;
}