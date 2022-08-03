#include<stdio.h>
#include<stdbool.h>

bool Reverse(char *str)
{
	char *temp = str;
	while(*temp !='\0')
	{
		temp++;
	}
	temp--;
	while(*temp != *str )
	{
		printf("%s",*temp);
		temp--;
	}
}

int main()
{
	char Arr[20];
	bool bret ;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	Reverse(Arr);

	return 0;
}