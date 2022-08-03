import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean ChkBit(int iNo,int iPos)
	{
		int iMask = 0X00000001;
		int iResult = 0;
		
		if((iPos<0)||(iPos>32))
		{
			System.out.println("Invalid Position");
		}
		iMask = iMask<<(iPos-1);
		
		iResult = iNo & iMask;
		if(iResult==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class program1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int value = sobj.nextInt();
		
		System.out.println("Enter the Position");
		int position = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		boolean bret = bobj.ChkBit(value,position);
		if(bret == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}