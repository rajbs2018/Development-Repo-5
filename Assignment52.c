#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	char ch1 = 'A';
	char ch2 = 'a';
	int i = 0, j =0;
	
	for(i= 1 ; i <= iRow; i++)
	{
		for(j=1; j <= iCol; j++)
		
		if((i % 2 ==0))
		 {
		    printf("%c\t",ch2);
			ch2++;
		 }
		 else
		 {
			 printf("%c\t",ch1);
			 ch1++;
		 }
		    ch1 = 'A';
			ch2 = 'a';
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