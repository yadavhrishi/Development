#include<iostream>
using namespace std;

template <class T>
T MaxN(T *Arr,int Size)
{
	T Max=Arr[0];
	for(int i=0;i<Size;i++)
	{
		if(Arr[i]>Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.43,34.6,43.8,22.5};
	int iMax = MaxN(Arr,5);
	printf("%d is Maximun number\n",iMax);
	float fMax = MaxN(Brr,4);
	printf("%f is Maximun number\n",fMax);
	
	return 0;
}