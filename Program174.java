import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(int iRow,int iCol)
	{
		int i=0,j=0;
		int iValue=0;
		
		for(i=1,iValue=iRow;i<=iRow;i++,iValue--)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print(iValue+"\t");
			}
			System.out.println();
		}
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of rows");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter the number of columns");
		int iValue2 = sobj.nextInt();
		
		Display dobj = new Display();
		
		dobj.Pattern(iValue1,iValue2);
	}
}