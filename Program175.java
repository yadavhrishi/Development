import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(int iRow,int iCol)
	{
		int i=0,j=0;
		int iValue=0;
		for(i=0;i<iRow;i++)
		{
			for(j=1,iValue=1;j<=iCol;j++,iValue++)
			{
				System.out.print("\t");
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
		
		System.out.println("Enter the number of rows");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter the number of columns");
		int iValue2 = sobj.nextInt();
		
		Display dobj = new Display();
		
		dobj.Pattern(iValue1,iValue2);
	}
}