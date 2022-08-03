#include<stdio.h>

void strcpyX(char *str, char *dest)
{
        while(*str != '\0')
        {
			if((*str>='A')&&(*str<='Z'))
			{
				*dest = *str + 32;
			}
			else
			{
				*dest = *str;
			}
            str++;
            dest++;
        }
        *dest = '\0';
}

int main()
{
    char Arr[20];   // Bharaleli wahi
    char Brr[20];   // Kori wahi

    printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

     printf("String After cpoy: %s",Brr);

    return 0;
}
