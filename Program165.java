import java.lang.*;
import java.util.*;

class Number
{
	public int OddProduct(int Arr[])
	{
		int i=0,iMult=1;
		boolean chk = false;
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2) != 0)
			{
				chk = true;
				iMult = iMult*Arr[i];
			}
		}
		if(chk == false)
		{
			return 0;
		}
		else
		{
			return iMult;
		}
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		Number nobj = new Number();
		
		int iRet = nobj.OddProduct(Arr);
		System.out.println("Product of all odd elements is :"+iRet);
	}
}