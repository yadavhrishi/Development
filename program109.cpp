#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr,int Size)
{
	T Sum=0;
	for(int i=0;i<Size;i++)
	{
		Sum = Sum + Arr[i];
	}
	return Sum;
}

int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.43,34.6,43.8,22.5};
	int iSum = AddN(Arr,5);
	printf("%d is Addition\n",iSum);
	float fSum = AddN(Brr,4);
	printf("%f is Addition\n",fSum);
	
	return 0;
}