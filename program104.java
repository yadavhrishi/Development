import java.lang.*;
import java.util.*;

class Bitwise
{
	public int OffBit(int iNo,int iPos)
	{
		int iMask=0X00000001;
		int iResult=0;
		
		if((iPos<0)||(iPos>32))
		{
			System.out.println("Invalid Position");
		}
		
		iMask = iMask<<(iPos-1);
		iResult = iNo ^ iMask;
		
		return iResult;
	}
}

class program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int value = sobj.nextInt();
		
		System.out.println("Enter the Position");
		int position = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iret = bobj.OffBit(value,position);
		
		System.out.println("Updated number is "+iret);
	}
}