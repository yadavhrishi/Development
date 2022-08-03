// program to display 5 times Hello on screen

#include<stdio.h>

void Display()
{
	/*printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("hello\n");*/
	
	int iCnt = 0;
	
	for(iCnt=1,iCnt<=5,iCnt++)
	{
		printf("hello");
	}
}

int main()
{
	Display();

	return 0;
}

