import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
		ArrayList <String>obj = new ArrayList<String>();
		obj.add("January");
		obj.add("February");
		obj.add("Hello");
		obj.add("March");
		obj.add("April");
		obj.add(2,"New");
		obj.add("Hello");
		obj.add("Hello");
		
		System.out.println("Array list contains:"+obj);
		System.out.println("Size is:"+obj.size());
		
		System.out.println("Elements are using for loop:");
		for(int i=0;i<obj.size();i++)
		{
			System.out.println(obj.get(i));
		}	
		
		String str;
		int Cnt=0;
		for(int i=0;i<obj.size();i++)
		{
			str = obj.get(i);
			if(str.equals("Hello"))
			{
				Cnt++;
			}	
		}
		System.out.println("Hello occurs "+Cnt+"times in array list");
		
		if(obj.contains("April"))
		{
			System.out.println("Element is there");
		}	
		
		int ret = obj.indexOf("April");
		System.out.println("Element is at:"+ret);
		
		System.out.println("Elements at index 3 index :"+obj.get(3));
		
		obj.remove(3);
		obj.remove("April");
		System.out.println("updated list is"+obj);
		
		obj.clear();
		System.out.println("updated list is"+obj);

	}
}
