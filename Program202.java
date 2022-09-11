import java.lang.*;
import java.util.*;

class MyArray
{
	public void DisplayMin(int Arr1[],int Arr2[])
	{
		int iMin1=Arr1[0];
		for(int i=0;i < Arr1.length;i++)
		{
			if(Arr1[i] < iMin1)
			{
				iMin1 = Arr1[i];
			}
		}
		
		int iMin2 = Arr2[0];
		for(int j=0;j < Arr2.length;j++)
		{
			if(Arr2[j] < iMin2)
			{
				iMin2 = Arr2[j];
			}
		}
		
		System.out.println("Minimun element of First array is :"+iMin1);
		System.out.println("Minimun element of Second array is :"+iMin2);
		
	}
}

class Program2
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
		mobj.DisplayMin(Arr1,Arr2);
	}	
		
}