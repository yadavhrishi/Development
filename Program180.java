import java.lang.*;
import java.io.*;
import java.util.*;

class Pattern
{
	public void Display(int iRow,int iCol)
	{
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(i+"\t");
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
		
		System.out.println("Enter the rows");
		int iRow = sobj.nextInt();
		
		System.out.println("Enter the columns");
		int iCol = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		
		pobj.Display(iRow,iCol);
	}
}