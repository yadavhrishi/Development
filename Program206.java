import java.lang.*;
import java.util.*;

class MyArray
{
	public int[] ReverseNumber(int Arr[])
	{
		int iTemp=0,iNum=0,iDigit=0;
		for(int i=0;i<Arr.length;i++)
		{
			iTemp = Arr[i];
			iNum=0;
			iDigit=0;
			while(iTemp != 0)
			{	
				iDigit = iTemp%10;
				iNum = iNum*10 + iDigit;
				iTemp = iTemp/10;
			}	
			Arr[i] = iNum;
		}
		
		return Arr;
	}
}

class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number op elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements of array");
		
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MyArray mobj = new MyArray();
		
		int Brr[] = mobj.ReverseNumber(Arr);
		
		for(int j=0;j<iSize;j++)
		{
			System.out.print(Brr[j]+"\t");
		}
	}
}