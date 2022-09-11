import java.lang.*;
import java.io.*;
import java.util.*;

class StringX
{
	public boolean Pallindrome(String str)
	{
		String str1 = str.toLowerCase();
		boolean chk = false;
		
		for(int i=0,j=(str.length())-1;i<=j;i++,j--)
		{
			if((str1.charAt(i)) == (str1.charAt(j)))
			{
				chk = true;
			}
			else
			{
				chk = false;
				break;
			}
		}
		return chk;
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String str = sobj.nextLine();
		
		StringX xobj = new StringX();
		
		boolean bRet = xobj.Pallindrome(str);
		if(bRet == true)
		{
			System.out.println("String is pallindrome");
		}
		else
		{
			System.out.println("String is not pallindrome");
		}
	}
}