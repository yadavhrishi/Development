import java.lang.*;
import java.util.*;

class StringDemo
{
	public String Reverse(String str)
	{
		char temp='\0';
		char Arr[] = str.toCharArray();
		
		for(int i=0,j=Arr.length-1;i<=j;i++,j--)
		{
			temp = Arr[i];
			Arr[i] = Arr[j];
			Arr[j] = temp;
		}
		
		System.out.println(Arr);
		
		String newstr = new String(Arr);
		
		return newstr;
		
	}
}

class Program5
{
	public static void main(String[] arg)
	{ 
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		StringDemo dobj = new StringDemo();
		
		String iRet = dobj.Reverse(str);
		
		System.out.println(iRet);
	}
}
