#include<stdio.h>

// Structure Declaration
struct Demo
{
	int*ip;
	float*fp;
};

int main()
{
	
    // Structure object creation
    struct Demo obj;
	
	int no=11;
	float f=3.10;
	
	obj.ip= &no;
	obj.fp= &f;
    // Object initialization
    
    printf("%d\n",obj.ip);    // 21
    printf("%d\n",sizeof(obj)); 	// 12
	printf("%d\n",obj.fp);
	printf("%d\n",sizeof(obj));
	printf("%d\n",sizeof(obj.ip));
	printf("%d\n",sizeof(obj.fp));
	//printf("%d\n",sizeof(*ip));
	
	
    return 0;
}