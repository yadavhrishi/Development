import java.lang.*;
import java.util.*;

class MyArray
{
	public void Pattern(int Arr[])
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]%2 ==0)
			{
				for(int j=1;j<=Arr[i];j++)
				{
					System.out.print("*\t");
				}
				System.out.println();
			}
		}
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		
		mobj.Pattern(Arr);
	}
}