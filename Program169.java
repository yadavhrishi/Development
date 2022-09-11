import java.lang.*;
import java.util.*;
import java.io.*;

class StringX
{
	public String StrRev(String str)
	{
		int i=0,j=0;
		char temp = '\0';
		StringBuffer newstr = new StringBuffer(str);
		
		for(i=newstr.length()-1,j=0;(i>=0)&&(j<newstr.length());i--,j++)
		{
			if(Character.isUpperCase(str.charAt(i)))
			{
				temp = str.charAt(j);
				newstr.setCharAt(j,Character.toLowerCase(str.charAt(i)));
			}
			else if(Character.isLowerCase(str.charAt(i)))
			{
				temp = str.charAt(j);
				newstr.setCharAt(j,Character.toUpperCase(str.charAt(i)));;
			}
			
			if(Character.isUpperCase(temp))
			{
				newstr.setCharAt(i,Character.toLowerCase(temp));
			}
			else if(Character.isLowerCase(temp))
			{
				newstr.setCharAt(i,Character.toUpperCase(temp));
			}
			
		}
		String str1 = newstr.toString();
		
		return str1;
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string ");
		String str = sobj.nextLine();
		
		StringX xobj = new StringX();
		
		String fstr = xobj.StrRev(str);
		System.out.println(fstr);
	}
}