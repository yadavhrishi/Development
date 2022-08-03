#include<stdio.h>

extern int i;
extern int j;
extern int x;
extern int y=151;
void gun();

int main()
{
    printf("INside main");
	fun();
	gun();
		
	return 0;
}

int i=21;

void gun()
{
	printf("Inside gun");
}

