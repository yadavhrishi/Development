#include<stdio.h>

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("String after reverse: %s\n",Arr);

    return 0;
}
