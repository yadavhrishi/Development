import java.lang.*;
import java.util.*;

class MyArray
{
	public int Difference(char Arr[])
	{
		int iCap=0,iSmall=0,i=0;
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]>'A')&&(Arr[i]<'Z')||(Arr[i]=='A')||(Arr[i]=='Z'))
			{
				iCap++;
			}
			else if((Arr[i]>'a')&&(Arr[i]<'z')||(Arr[i]=='a')||(Arr[i]=='z'))
			{
				iSmall++;
			}
		}
		
		return (iCap-iSmall);
	}
}

class Program4
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
		
		MyArray mobj = new MyArray();
		
		int iRet = mobj.Difference(Arr);
		System.out.println("Difference between frequency is "+iRet);
	}
}