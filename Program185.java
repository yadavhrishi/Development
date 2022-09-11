import java.lang.*;
import java.io.*;
import java.util.*;

class Pattern
{
	public void Display(String str)
	{	
		char Arr[] = str.toCharArray();
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+"\t");
			}
			System.out.println();
		}
		for(int i=1;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length-i;j++)
			{
				System.out.print(Arr[j]+"\t");
			}
			System.out.println();
		}
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		Pattern pobj = new Pattern();
		
		pobj.Display(str);
	}
}