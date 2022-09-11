import java.lang.*;
import java.util.*;

class MyArray
{
	public int Search(char Arr[],int ch)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i] == ch)
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
			return i+1;
		}
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		char Arr[] = new char[iSize];
		
		System.out.println("Enter the elements");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
		
		System.out.println("Enter the character that you want to search");
		char ch = sobj.next().charAt(0);
		
		MyArray mobj = new MyArray();
		
		int iRet = mobj.Search(Arr,ch);
		System.out.println("Character occured at "+iRet);
	}
}