import java.util.Scanner;
public class Exercise1_3 {
       public static void main(String[] args) {
	   Scanner sc = new Scanner(System.in);
	   int n=sc.nextInt();
	   int sum=0;
     for(int t=0; t<(n*2); t++)
{
  if (t%2 ==0 && t%3==0)
  {
    sum=sum+t;
  }
}
System.out.println(sum);
