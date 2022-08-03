#include<stdio.h>

int Difference(char *str)
{
	int icnt =0;
	int freq = 0;
	int iCnt =0;
	
	while(*str !='\0')
	{
		if((*str>=65)&&(*str<=90))
		{
			iCnt++;
		}
		else if((*str>=97)&&(*str<=122))
		{
			icnt++;
		}
		str++;
	}
	freq = icnt - iCnt;
	return freq;
}

int main()
{
	char Arr[20];
	int iret =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	iret = Difference(Arr);
	printf("Difference is %d",iret);
	
	return 0;
}