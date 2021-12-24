#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char Div)
{
	if(Div == 'A')
	{
		printf("Your Exam At 7Am");
	}
	else if(Div == 'B')
	{
		printf("Your Exam At 8.30Am");
	}
	else if(Div == 'C')
	{
		printf("Yor Exam At 9.20AM");
	}
	else if(Div == 'D')
	{
		printf("Your Exam At 10.20");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the characte :\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
	
}