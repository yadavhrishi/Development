#include<stdio.h>

void strcatX(char *str, char *dest)
{
        while(*str != '\0')
        {
            str++;
        }

        while(*dest != '\0')
        {
            *str = *dest;
            str++;
            dest++;
        }
        *str = '\0';
}

int main()
{
    char Arr[20];   
    char Brr[20];  

    printf("Enter first the String\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter second the String\n");
	scanf("%[^'\n']s",&Brr);
    
    strcatX(Arr,Brr);

    printf("String after concatenation %s\n",Arr);

    return 0;
}
