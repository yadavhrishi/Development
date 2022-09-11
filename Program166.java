import java.lang.*;
import java.util.*;

class StringX
{
	public String StrNCatX(String str1,String str2,int iCnt)
	{
		if(iCnt > str2.length())
		{
			String str = str1.concat(str2);
			return str;
		}
		
		char Arr1[] = str1.toCharArray();
		char Arr2[] = str2.toCharArray();
		
		char Brr[] = new char[Arr1.length+iCnt+1];
		int i=0;
		for(i=0;i<Arr1.length;i++)
		{
			Brr[i] = Arr1[i];
		}
		
		for(int j=0;j<iCnt;j++)
		{
			Brr[i] = Arr2[j];
			i++;
		}
		
		String fStr = Arrays.toString(Brr);
		
		return fStr;
	}
}

class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the second string");
		String str2 = sobj.nextLine();
		
		System.out.println("Enter number of characters to concat");
		int N = sobj.nextInt();
		
		StringX strobj = new StringX();
		String str = strobj.StrNCatX(str1,str2,N);
		System.out.println(str);
		/*for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]);
		}*/
	}
}