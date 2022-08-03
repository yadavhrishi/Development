import java.io.*;

class Input3
{
	InputStreamReader iobj= new InputStreamReader(System.in);
	BufferedReader bobj =new BufferedReader(iobj);
	
	public static void main(String a[])
	{
		
		
		System.out.println("Enter string");
		String str = bobj.readLine();
		
		System.out.println("Enter Integer");
		int no = Integer.parseInt(bobj.readLine);
		
		System.out.println("Enter float");
		float f = Float.parseFloat(bobj.readLine);
		
		System.out.println("Enter Double");
		double d = Double.parseDouble(bobj.readLine);
		
		System.out.println("Entered String is: "+str);
		System.out.println("Entered integer is: "+no);
		System.out.println("Entered float is: "+f);
		System.out.println("Entered double is: "+d);

	}
}