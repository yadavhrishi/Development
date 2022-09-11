import java.lang.*;
import java.util.*;

class MyArray
{
	public int[] CopyArrayRev(int Arr1[],int Arr2[])
	{
		int Arr3[] = new int[(Arr1.length)+(Arr2.length)];
		
		int i=0;
		int j=0;
		for(i=0,j=Arr3.length-1;(i < Arr1.length)&&(j >= 0);i++,j--)
		{
			Arr3[j] = Arr1[i];
		}
		
		
		for(int k=0,l = j;(k < Arr2.length)&&(l >= 0);k++,l--)
		{
			Arr3[l] = Arr2[k];
		}

		return Arr3;
	}
}

class Program3
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
		int NewArr[] = mobj.CopyArrayRev(Arr1,Arr2);
		System.out.println("Copied reversed Array :");
		for(int k=0;k < NewArr.length;k++)
		{
			System.out.print(NewArr[k]+"\t");
		}
	}	
}