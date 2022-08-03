import java.lang.*;
import java.sqp.*;

class DataBase
{
	public static void main(String arg[])
	{
		try
		{
			class.forName("com.mysql.jdbc.Driver");
			
			connection con = DriverManager.getConnection("jdbc::mysql://localhost:3306/marvellous","root","root");
			Statement stmt = con.createStatement();
			
			ResultSet rs = stmt.executeQuery("Select* from student");
			while(rs.next())
			{
				System.out.println(rs.getInt(1)+""+rs.getString(2)+""+rs.getInt(3)+""+rs.getString(4));
				
			}
			con.close();
		}
		catch(Exception obj)
		{
			System.out.println("Exception occured:"+obj);
		}
	}
}