import java.lang.*;
import java.util.*;

class Display
{
	public void Pattern(String str)
	{
		char Arr[] = str.toCharArray();
		
		for(int i=0;i<Arr.length-1;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				if(i>=j)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}
			System.out.println();
		}
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				if(j<Arr.length-i)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
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
		
		Display dobj = new Display();
		
		dobj.Pattern(str);
	}
}