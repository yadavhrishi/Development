import java.lang.*;
import java.util.*;

class MyArray
{
	public int[] ArrayConcate(int Arr1[],int iSize1,int Arr2[],int iSize2)
	{
		int Arr3[] = new int [iSize1+iSize2];
		
		for(int i=0;i < Arr1.length;i++)
		{
			Arr3[i] = Arr1[i];
		}
		
		for(int j=0,k=Arr1.length;(j < Arr2.length)&&(k < Arr3.length);j++,k++)
		{
			Arr3[k] = Arr2[j];
		}
		
		return Arr3;
	}
}

class Program4
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
		int Arr3[] = mobj.ArrayConcate(Arr1,iSize1,Arr2,iSize2);
		System.out.println("Elements of concated array");
		for(int i=0;i < Arr3.length;i++)
		{
			System.out.print(Arr3[i]+"\t");
		}
		
	}
}