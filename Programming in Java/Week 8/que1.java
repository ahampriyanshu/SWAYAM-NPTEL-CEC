import java.util.*;
public class Pattern1 {
    public static void main(String[] args) {
        Scanner inr = new Scanner(System.in);
	   int n = inr.nextInt();
        // Add the necessary code in the below space
      for(int i=1;i<=n;i++)
      {
        for(int space=1;space<=n-i;space++)
        {
          System.out.print("  ");
        }
        for(int k=1;k<2*i;k++)
        {
          System.out.print("* ");
        }
        System.out.print("\n");
      }
      System.out.print(n*n);
      System.out.print("\n");
    }
}
