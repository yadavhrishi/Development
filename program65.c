#include<stdio.h>

void struprx(char *str)
{	
	while(*str !='\0')
	{
		*str = *str - 32;
		str++;
	}
}

int main()
{
	char Arr[20];
	int iret =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	struprx(Arr);
	printf(" Modified string is %s",Arr);
	
	return 0;
}