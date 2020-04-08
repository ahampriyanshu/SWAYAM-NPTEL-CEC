import java.util.Scanner;
  
  public class Question5_3 {
  public static void main(String[] args) { 
      int a, b;
      Scanner input = new Scanner(System.in);
int result;
a = input.nextInt();
b = input.nextInt();

try 
{
   result = a/b;
  System.out.print(result);
}
catch (ArithmeticException e )
{
  System.out.print("Exception caught: Division by zero.");
}
}
}
