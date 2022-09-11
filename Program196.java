import java.lang.*;
import java.util.*;

class MyArray
{
	
	public void Display(int Arr1[],int Arr2[])
	{
		System.out.println("Content of First Array");
		for(int i=0;i < Arr1.length;i++)
		{
			System.out.print(Arr1[i]+"\t");
		}
		System.out.println();
		
		System.out.println("Contents of second Array");
		for(int j=0;j < Arr2.length;j++)
		{
			System.out.print(Arr2[j]+"\t");
		}
	}
}

class Program1
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
		mobj.Display(Arr1,Arr2);
	}
}