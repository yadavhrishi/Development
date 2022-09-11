import java.lang.*;
import java.util.*;

class StringDemo
{
	public boolean ChkVowel(String str)
	{
		boolean Chk = false;
		
		char Arr[] = str.toCharArray();
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i] == 'a')||(Arr[i] == 'e')||(Arr[i] == 'i')||(Arr[i] == 'o')||(Arr[i] == 'u'))
			{
				Chk = true;
			}
		}
		
		return Chk;
	}
}

class Program4
{
	public static void main(String[] arg)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		StringDemo dobj = new StringDemo();
		
		boolean bRet = dobj.ChkVowel(str);
		if(bRet == true)
		{
			System.out.println("There is vowel");
		}
		else
		{
			System.out.println("There is no vowel");
		}
	}
}
