import java.lang.*;
import java.io.*;
import java.util.*;

class Pattern
{
	public void Display(int iRow,int iCol)
	{
		for(int i=0;i<iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(j+"\t");
			}
			System.out.println();
		}
	}
}

class Program2
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