#include<stdio.h>

void strcpyX(char *str, char *dest)
{
        while(*str != '\0')
        {
            if(*str != ' ')
			{				
				*dest = *str;
				dest++;
			}
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
