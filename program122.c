#include<stdio.h>

void Display()
{
	static int iCnt =5;
	if((iCnt<=5)&&(iCnt>0))
	{
		printf("%d\t",iCnt);
		iCnt--;
		Display();
		
	}
}

int main()
{	
	Display();
	
	return 0;
}