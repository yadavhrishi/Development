#include<iostream>
using namespace std;

template <class T>
T SearchFirst(T *Arr,int Size,T iNo)
{
	int Occur=0;
	for(int i=0;i<Size;i++)
	{
		if(Arr[i]==iNo)
		{
			Occur = i;
		}
	}
	return Occur;
}

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,30,10};
	int iRet= SearchFirst(Arr,9,40);
	cout<<"First occured at  : "<<iRet<<endl;
	
	return 0;
}
