#include<stdio.h>

void DisplayASCII()
{
	int i=0;
	
	for(i=0;i<=255;i++)
	{
		printf("ASCII value of %c in decial: %d ,in octal: %o ,in hexadecimal: %X \n",i,i,i,i);
	}
}

int main()
{
	DisplayASCII();
	
	return 0;
}