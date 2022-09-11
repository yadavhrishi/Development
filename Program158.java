import java.lang.*;
import java.util.*;

class Digit
{
	public int CountBetween(int iNo)
	{
		int iDigit=0,i=0,iCnt=0;
		
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if((iDigit>3)&&(iDigit<7))
			{
				iCnt++;
			}
			iNo = iNo/10;
		}
		
		return iCnt;
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.CountBetween(iValue);
		System.out.println("Number of digits between 3 and 7:"+iRet);
	}
}