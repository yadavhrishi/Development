import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(int iRow,int iCol)
	{	
		for(int i=1;i<=iRow;i++)
		{
			for(int j=iCol;j>0;j--)
			{
				if(i==j)
				{
					System.out.print("#\t");
				}
				else if(i<j)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("@\t");
				}
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
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter the columns");
		int iValue2 = sobj.nextInt();
		
		Display dobj = new Display();
		
		dobj.Pattern(iValue1,iValue2);
	}
}