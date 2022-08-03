#include<stdio.h>

// Structure Declaration
struct Demo
{
    int iNo;
    float fValue;
    int iValue;
	double dValue;
	
};
int main()
{
    // Structure object creation
    struct Demo obj;
	
	
    // Object initialization
    obj.iNo = 11;
    obj.fValue = 10.11;
    obj.iValue = 21;
	obj.dValue = 0;
    printf("%d\n",obj.iValue);    // 21
    printf("%d\n",sizeof(obj)); 	// 12
	printf("%d\n",obj.dValue);
	printf("%d\n",sizeof(obj.dValue));
	printf("%d\n",sizeof(obj.iNo));
	printf("%d\n",sizeof(obj.fValue));
	printf("%d\n",sizeof(Arr));
	
	
    return 0;
}