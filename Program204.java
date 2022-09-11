import java.lang.*;
import java.util.*;

class MyArray
{
	public int[] CopyArray(int Arr[])
	{
		int Brr[] = new int[Arr.length];
		
		for(int i=0;i<Arr.length;i++)
		{
			Brr[i] = Arr[i];
		}
		
		return Brr;
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements  of array");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		
		int Brr[] = new int[iSize];
		
		Brr = mobj.CopyArray(Arr);
		
		System.out.println("Elements if copied array");
		
		for(int j=0;j<iSize;j++)
		{
			System.out.print(Brr[j]+"\t");
		}
	}
}