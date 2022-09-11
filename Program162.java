import java.lang.*;
import java.util.*;

class Number
{
	int ChkOccur(int Arr[],int iNo)
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
			return -1;
		}
		else
		{
			return i;
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
		
		System.out.println("Enter the number to check occurence");
		int iChk = sobj.nextInt();
		
		Number nobj = new Number();
		
		int iRet = nobj.ChkOccur(Arr,iChk);
		if(iRet == -1)
		{
			System.out.println("There is no such element");
		}
		else
		{
			System.out.println("Element occured at position "+iRet);
		}	
	}
}