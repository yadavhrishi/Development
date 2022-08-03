#include<iostream>
using namespace std;

template <class T>
T MinN(T *Arr,int Size)
{
	T Min=Arr[0];
	for(int i=0;i<Size;i++)
	{
		if(Arr[i]<Min)
		{
			Min = Arr[i];
		}
	}
	return Min;
}

int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.43,34.6,43.8,22.5};
	int iMin = MinN(Arr,5);
	printf("%d is Minimun number\n",iMin);
	float fMin = MinN(Brr,4);
	printf("%f is Minimum number\n",fMin);
	
	return 0;
}