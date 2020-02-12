import java.util.Scanner;  
public class Exercise1_2 {
       public static void main(String[] args) {
        Scanner s = new Scanner(System.in); 
        int x = s.nextInt(); 
        int y = s.nextInt();
        int z = s.nextInt();
        int result = 0;
        if (x > y)
{
  if(x > z)
  {
    System.out.println(x);
  }
  else
  {
    System.out.println(z);
  }
}
else if(y > z)
{
  if(y > x)
  {
  System.out.println(y);
  }
  else
  {
    System.out.println(z);
  }
}
else
{
  System.out.println(z);
}
}
}
