import java.lang.*;

class Demo
{}

class ClassInfo
{
	public static void main(String Arg[])
	{
		Demo obj = new Demo();
		
		Class cref = obj.getClass();
		System.out.println("Class name of obj is: "+cref.getName());
		
	}
}