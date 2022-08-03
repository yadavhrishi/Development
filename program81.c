#include<stdio.h>

void strcpyrev(char *src, char *dest)
{
		char ch = *src;
        while(*src != '\0')
        {
            src++;
        }
		src--;

        while(*src != ch)
        {
            *dest = *src;
            src--;
            dest++;
        }
		*dest = ch;
		dest++;
        *dest = '\0';
}

int main()
{
    char Arr[20];   
    char Brr[20]; 

    printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

    strcpyrev(Arr,Brr);

    printf("String after copy : %s",Brr);

    return 0;
}
