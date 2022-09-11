import java.lang.*;
import java.util.*;

class MyArray
{
	public int DiffSum(int Arr1[],int Arr2[])
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
		
		int iDiff = iSum1 - iSum2;
		return iDiff;
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
		int iRet = mobj.DiffSum(Arr1,Arr2);
		System.out.println("Difference of summation of arrays is :"+iRet);
	}
}