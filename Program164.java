import java.lang.*;
import java.util.*;

class Number
{
	public void DisplayRange(int Arr[],int iStart,int iEnd)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]>iStart)&&(Arr[i]<iEnd))
			{
				System.out.print(Arr[i]+" ");
			}
		}
	}
}

class Program4
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
		
		System.out.println("Enter the range from to");
		int iStart = sobj.nextInt();
		int iEnd = sobj.nextInt();
		
		Number nobj = new Number();
		
		nobj.DisplayRange(Arr,iStart,iEnd);
	}
}