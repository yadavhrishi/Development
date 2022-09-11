import java.lang.*;
import java.util.*;

class Number 
{
	public boolean ChkNo(int Arr[],int iNo)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i] == iNo)
			{
				break;
			}
		}
		
		if(i == Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
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
		
		System.out.println("Enter the number that want to check");
		int iNo = sobj.nextInt();
		
		Number nobj = new Number();
		
		boolean bRet = nobj.ChkNo(Arr,iNo);
		if(bRet == true)
		{
			System.out.println("Number is present");
		}
		else
		{
			System.out.println("Number is Not present");
		}
	}
}