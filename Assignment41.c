#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	char ch = 'A';

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
	printf("%c\t",ch);
	ch++;
	
	}
	
}

	int main()
{
	int iValue = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;

}