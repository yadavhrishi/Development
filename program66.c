#include<stdio.h>

void strtogglex(char *str)
{	
	while(*str !='\0')
	{
		if((*str>=65)&&(*str<=90))
		{	
			*str = *str + 32;
		}	
		else if((*str>=97)&&(*str<=122))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	int iret =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	strtogglex(Arr);
	printf(" Modified string is %s",Arr);
	
	return 0;
}