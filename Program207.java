import java.lang.*;
import java.util.*;

class MyArray
{
	public int CountCapital(char Arr[])
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if(((Arr[i] >'A')&&(Arr[i] <'Z'))||(Arr[i]== 'A')||(Arr[i]=='Z'))
			{
				iCnt++;
			}	
		}
		return iCnt;
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		char Arr[] = new char[iSize];
		
		System.out.println("Eter the elements of array");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
		for(int j=0;j<iSize;j++)
		{
			System.out.print(Arr[j]+"\t");
		}
		
		MyArray mobj = new MyArray();
		int iRet = mobj.CountCapital(Arr);
		System.out.println("Number of capital letters are "+iRet);
	}
}