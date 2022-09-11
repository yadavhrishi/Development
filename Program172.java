import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(int iRow,int iCol)
	{
		int i=0,j=0;
		char ch1 = 'A';
		char ch2 = 'a';
 		
		for(i=1;i<=iRow;i++)
		{
			for(j=1,ch1='A',ch2='a';j<=iCol;j++,ch1++,ch2++)
			{
				if((i%2) == 0)
				{
					System.out.print(ch2+"\t");
				}
				else if((i%2) != 0)
				{
					System.out.print(ch1+"\t");
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
		
		System.out.println("Enter the number of rows");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter the number of columns");
		int iValue2 = sobj.nextInt();
		
		Display dobj = new Display();
		
		dobj.Pattern(iValue1,iValue2);
	}
}