import java.lang.*;
import java.util.*;

class StringX
{
	public boolean ChkCnt(String str1,String str2)
	{
		char Arr[] = str1.toCharArray();
		char Brr[] = str2.toCharArray();
		
		int i=0;
		if(Arr.length != Brr.length)
		{
			return false;
		}
		
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i] != Brr[i])
			{
				return false;
			}
		}
		
		if(i == (Arr.length))
		{
			return true;
		}
		
		return false;
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the second String");
		String str2 = sobj.nextLine();
		
		StringX strobj = new StringX();
		
		boolean bRet = strobj.ChkCnt(str1,str2);
		if(bRet == true)
		{
			System.out.println("Contents of string are same");
		}
		else
		{
			System.out.println("Contents of string are different");
		}
	}
}