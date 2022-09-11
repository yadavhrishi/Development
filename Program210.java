import java.lang.*;
import java.util.*;

class MyArray
{
	public char[] ReplaceArray(char Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>'A')&&(Arr[i]<'Z')||(Arr[i]=='A')||(Arr[i]=='Z'))
			{
				int ascii=0;
				char iTemp = Arr[i];
				char Lower ='\0';
				ascii = iTemp;
				System.out.println(ascii);
				ascii = ascii+32;
				Lower = (char)ascii;
				Arr[i] = Lower;
			}
		}
		
		return Arr;
	}
}

class Program1
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
		
		char Brr[] = mobj.ReplaceArray(Arr);
		for(int j=0;j<iSize;j++)
		{
			System.out.print(Brr[j]+"\t");
		}
	}
}