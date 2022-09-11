import java.lang.*;
import java.util.*;

class Digit
{
	public int Product(int iNo)
	{
		int iDigit=0,i=0,iMult=1;
		
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit != 0)
			{	
				iMult = iMult*iDigit;
			}	
			iNo = iNo/10;
		}
		
		return iMult;
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.Product(iValue);
		System.out.println("Product of digits is :"+iRet);
	}
}