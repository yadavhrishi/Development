#include<iostream>
using namespace std;

template <class T>
void Display(T value,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<value<<"\t";
	}
	cout<<endl;
}


int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);
	
	return 0;
}