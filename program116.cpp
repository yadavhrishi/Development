#include<iostream>
using namespace std;

template <class T>
T Reverse(T *Arr,int iSize)
{
	
}

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,30,10};
	for(int i=0;i<9;i++)
	{
		cout<<Arr[i];
	}
	
	Reverse(Arr,9); 
	
	return 0;
}
