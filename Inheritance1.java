import java.lang.*;

class Base
{
	public int i,j;
	
	public void fun()
	{
		System.out.println("base fun");
	}
    public void gun()
	{
		System.out.println("base gun");
	}
	public void sun()
	{
		System.out.println("base sun");
	}
}

class Derived extends Base
{
	public int x,y;
	
	public void fun()
	{
		System.out.println("Derived  fun");
	}
	public void sun()
	{
		System.out.println("Derived sun");
	}
	public void run()
	{
		System.out.println("Derived run");
	}
	
}

class Inheritance1
{
	public static void main(String arg[])
	{
		//base bobj = new Base()
		//Derived dobj = new Derived();
		
		Base obj = new Derived();
		//Derived obj2 = new Base();
	    obj.fun();
		obj.gun();
		obj.sun();
		//obj.run();
	}
	
}