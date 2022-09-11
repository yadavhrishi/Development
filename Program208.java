import java.lang.*;
import java.util.*;

class MyArray
{
	public int[] SumArray(int Arr[])
	{
		int iTemp=0,iSum=0,iDigit=0;
		for(int i=0;i<Arr.length;i++)
		{
			iTemp = Arr[i];
			iSum=0;
			iDigit=0;
			while(iTemp != 0)
			{	
				iDigit = iTemp%10;
				iSum = iSum + iDigit;
				iTemp = iTemp/10;
			}	
			Arr[i] = iSum;
		}
		
		return Arr;
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number op elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements of array");
		
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		
		int Brr[] = mobj.SumArray(Arr);
		
		for(int j=0;j<iSize;j++)
		{
			System.out.print(Brr[j]+"\t");
		}
	}
}