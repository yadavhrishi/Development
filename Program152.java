import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public void DivByFive(int Arr[])
	{
		System.out.println("Elements divisible by 5");
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%5) == 0)
			{
				System.out.print(Arr[i]+",");
			}
		}
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		ArrayDemo adobj = new ArrayDemo();
		
		adobj.DivByFive(Arr);
	}
}