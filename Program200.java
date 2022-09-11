import java.lang.*;
import java.util.*;

class MyArray
{
	public void SumArray(int Arr1[],int Arr2[])
	{
		int iSum1=0,iSum2=0;
		
		for(int i=0;i < Arr1.length;i++)
		{
			iSum1 = iSum1 + Arr1[i];
		}
		
		for(int j=0;j < Arr2.length;j++)
		{
			iSum2 = iSum2 + Arr2[j];
		}
		
		System.out.println("Summation of elements of first array is : "+iSum1);
		System.out.println("Summation of elements of second array is : "+iSum2);
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int Arr1[];
		int Arr2[];
		
		System.out.println("Enter the length of array 1");
		int iSize1 = sobj.nextInt();
		Arr1 = new int [iSize1];
		
		System.out.println("Enter the elements of  array 1");
		for(int i=0;i < Arr1.length;i++)
		{
			Arr1[i] = sobj.nextInt();
		}
		
		System.out.println("Enter the length of array 2");
		int iSize2 = sobj.nextInt();
		Arr2 = new int [iSize2];
		
		System.out.println("Enter the elements of array 2");
		for(int j=0;j < Arr2.length;j++)
		{
			Arr2[j] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		mobj.SumArray(Arr1,Arr2);
	}
}