import java.lang.*;
import java.util.*;

class DemoArray
{
	public void DivEven(int Arr[])
	{
		System.out.println("Elements Even and divisible by 5 are :");
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%5 == 0)&&(Arr[i]%2 ==0))
			{
				System.out.print(Arr[i]+",");
			}
		}
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		DemoArray adobj = new DemoArray();
		
		adobj.DivEven(Arr);
	}
}