import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask=0X00020010;
		int iResult=0;
		
		iResult = iNo&iMask;
		
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

class program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		boolean bret = bobj.CheckBit(value);
		
		if(bret==true)
		{
			System.out.println("5th and 18th bit is on");
		}
		else
		{
			System.out.println("5th and 18th bit is off");
		}
		
	}
}