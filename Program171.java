import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(int iRow,int iCol)
	{
		int i=0,j=0;
		char ch ='A';
		for(i=0;i<iRow;i++)
		{
			for(j=0,ch = 'A';j<iCol;j++,ch++)
			{
				System.out.print(ch+"\t");
			}
			System.out.println();
		}
	}
}

class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of rows");
		int iRow = sobj.nextInt();
		
		System.out.println("Enter the number of columns");
		int iCol = sobj.nextInt();
		
		Display dobj = new Display();
		
		dobj.Pattern(iRow,iCol);
	}
}