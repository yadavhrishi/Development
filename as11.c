#include<stdio.h>

int main()
{
	const int no=11;
	int const*const p=&no;
	
	printf("%d\n",sizeof(p));
//	printf("%d\n",*q);
	
	return 0;
}