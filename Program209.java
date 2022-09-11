import java.lang.*;
import java.util.*;

class MyArray
{
	public void Percentage(float Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if(Arr[i]<35)
			{
				System.out.println(Arr[i]+" Fail");
			}
			else if((Arr[i]>=35)&&(Arr[i]<50))
			{
				System.out.println(Arr[i]+" Pass class");
			}
			else if((Arr[i]>50)&&(Arr[i]<60))
			{
				System.out.println(Arr[i]+" Second class");
			}
			else if((Arr[i]>60)&&(Arr[i]<70))
			{
				System.out.println(Arr[i]+" First class");
			}
			else if(Arr[i]>70)
			{
				System.out.println(Arr[i]+" First class with distinction");
			}
			else
			{
				System.out.println("Enter the Proper percentage on "+i+"th index");
			}
		}
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of students");
		int iSize = sobj.nextInt();
		
		float Arr[] = new float[iSize];
		
		System.out.println("Enter the elements of array");
		for(int i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextFloat();
		}
		
		MyArray mobj = new MyArray();
		
		mobj.Percentage(Arr);
	}
}