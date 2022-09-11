import java.lang.*;
import java.util.*;

class MyArray
{
	public int ChkVowels(char Arr[])
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]=='A')||(Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='i')||(Arr[i]=='O')||(Arr[i]=='o')||(Arr[i]=='U')||(Arr[i]=='u'))
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		char Arr[] = new char[iSize];
		
		System.out.println("Enter the elements");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
		
		MyArray mobj = new MyArray();
		
		int iRet = mobj.ChkVowels(Arr);
		System.out.println("There are "+iRet+" Vowels");
	}
}