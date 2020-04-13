import java.sql.*;
import java.lang.*;
public class CalAverage {
    public static void main(String args[]) {
        try {
              Connection conn = null;
              Statement stmt = null;
              String DB_URL = "jdbc:sqlite:/tempfs/db";
              System.setProperty("org.sqlite.tmpdir", "/tempfs");
              String query="";
              // Open a connection
              conn = DriverManager.getConnection(DB_URL);
              stmt = conn.createStatement();
              
~~~THERE IS SOME INVISIBLE CODE HERE~~~

ResultSet rs=stmt.executeQuery("select avg(age) from players");

rs.next();

System.out.println("Average age of players is "+rs.getInt(1));


~~~THERE IS SOME INVISIBLE CODE HERE~~~
			
		}
                catch(Exception e){ System.out.println(e);}  
	}  
}  
