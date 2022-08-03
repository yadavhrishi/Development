
class MyThread1
{
	public static void main(String a[])
	{
		System.out.println("Inside main");
		
		Thread tobj = Thread.currentThread();
		
		System.out.println("Name of current Thread is: "+tobj.getName());
	}
}