import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(String str)
	{
		char Arr[] = str.toCharArray();
		
		for(int i=1;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				if(j<i)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.println();
		}
	}
}

class Prrogram1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		String str = sobj.nextLine();
		
		Display dobj = new Display();
		
		dobj.Pattern(str);
	}
}