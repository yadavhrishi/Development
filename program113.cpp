#include<iostream>
using namespace std;

template <class T>
T Frequency(T *Arr,int Size,T iNo)
{
	int iCnt=0;
	for(int i=0;i<Size;i++)
	{
		if(Arr[i]==iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int Arr[] = {10,20,30,10,30,40,10,30,10};
	int iRet= Frequency(Arr,9,10);
	cout<<"Frequency is : "<<iRet<<endl;
	
	
	return 0;
}