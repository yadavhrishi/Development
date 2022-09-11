import java.lang.*;
import java.util.*;

class StringX
{
	public boolean StrNCmpX(String str1,String str2,int iNo)
	{
		char Arr[] = str1.toCharArray();
		char Brr[] = str2.toCharArray();
		int i=0;
		for(i=0;i<iNo;i++)
		{
			if(Arr[i] != Brr[i])
			{
				break;
			}
		}
		if(i == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the second string");
		String str2 = sobj.nextLine();
		
		System.out.println("Enter the number of characters you want to check");
		int iValue = sobj.nextInt();
		
		StringX xobj = new StringX();
		
		boolean bRet = xobj.StrNCmpX(str1,str2,iValue);
		if(bRet == true)
		{
			System.out.println("First "+iValue+" elements are same");
		}
		else
		{
			System.out.println("First "+iValue+" elements are not same");
		}
	}
};