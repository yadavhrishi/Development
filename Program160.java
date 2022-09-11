import java.lang.*;
import java.util.*;

class Digit
{
	public int DiffSum(int iNo)
	{
		int iDigit=0,i=0,iEven=0,iOdd=0;
		
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if((iDigit%2) ==0)
			{	
				iEven = iEven + iDigit;
			}	
			else if((iDigit%2) !=0)
			{
				iOdd =  iOdd + iDigit;
			}
			iNo = iNo/10;
		}
		
		return (iEven-iOdd);
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.DiffSum(iValue);
		System.out.println("Difference between Summation of even and odd numbers :"+iRet);
	}
}