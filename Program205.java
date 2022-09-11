import java.lang.*;
import java.util.*;

class MyArray
{
	public boolean ChkPallindrome(int Arr[])
	{
		boolean bflag = true;
		for(int i=0,j=Arr.length-1;i<=j;i++,j--)
		{
			if(Arr[i] != Arr[j])
			{
				bflag = false;
				break;
			}
		}
		
		return bflag;
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
		
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		
		boolean bRet = mobj.ChkPallindrome(Arr);
		if(bRet == true)
		{
			System.out.println("Array Elements are pallindrome");
		}
		else
		{
			System.out.println("Array Elements are not pallindrome");
		}
	}
}