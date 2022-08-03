import java.lang.*;
import java.util.*;

class Main1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iret = bobj.ToggleBit(value);
		
		System.out.println("Updated number is: "+iret);
	}	
}