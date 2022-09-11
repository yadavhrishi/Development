import java.lang.*;
import java.util.*;

class MyArray
{
	public void DisplayEven(int Arr1[],int Arr2[])
	{
		System.out.println("Even elements from first array");
		for(int i=0;i < Arr1.length;i++)
		{
			if((Arr1[i]%2) == 0)
			{
				System.out.print(Arr1[i]+"\t");
			}
		}
		System.out.println();
		
		System.out.println("Even elements from Second array");
		for(int j=0;j < Arr2.length;j++)
		{
			if((Arr2[j]%2) == 0)
			{
				System.out.print(Arr2[j]+"\t");
			}
		}
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int Arr1[];
		int Arr2[];
		
		System.out.println("Enter the size of array 1");
		int iSize1 = sobj.nextInt();
		Arr1 = new int[iSize1];
		
		System.out.println("Enter the  elements of first array");
		for(int i=0;i < Arr1.length;i++)
		{
			Arr1[i] = sobj.nextInt();
		}
		
		System.out.println("Enter the size of array 2");
		int iSize2 = sobj.nextInt();
		Arr2 = new int[iSize2];
		
		System.out.println("Enter the  elements of second array");
		for(int j=0;j < Arr2.length;j++)
		{
			Arr2[j] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		mobj.DisplayEven(Arr1,Arr2);
	}
}