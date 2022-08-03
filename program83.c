#include<stdio.h>

void strcpyX(char *str, char *dest)
{
		char ch = '\0';
        *str = ch;
		while(*str != '\0')
        {
            if((*str >='a')&&(*str<='z'))
			{				
				*dest = *str - 32;
				dest++;
			}
			*dest = *str;
			str++;
        }
        *dest = '\0';
}

int main()
{
    char Arr[20]; 
    char Brr[20];   

    printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("String After cpoy: %s",Brr);

    return 0;
}
