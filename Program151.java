import java.lang.*;
import java.util.*;

class DemoArray
{
	public int Difference(int Arr[])
	{
		int iEven=0,iOdd=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2) == 0)
			{
				iEven = iEven + Arr[i];
			}
			else if((Arr[i]%2) != 0)
			{
				iOdd = iOdd + Arr[i];
			}
		}
		return (iEven - iOdd);
	}
}

class Program1
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
		
		DemoArray daobj = new DemoArray();
		
		int iRet = daobj.Difference(Arr);
		System.out.println("Difference between summation of Even and odd elements is :"+iRet);
	}
	
}