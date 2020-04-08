import java.util.*;
  public class Pattern3 {
    public static void main(String[] args) {
        Scanner inr = new Scanner(System.in);
	   int n = inr.nextInt();
        // Add the necessary code in the below space
      int i,j,k,t=1,c,s=0;
      c=n-1;
      for(i=1;i<=n;i++)
      {
        int start =1;
        for(j=1;j<=c;j++)
        {
          System.out.print("  ");
        }
        for(k=1;k<=t;k++)
        {
          System.out.print(start+" ");
          s=start+s;
          start++;
        }
        c--;
        t+=2;
        System.out.print("\n");
      }
      System.out.println(s);
    }
  }
