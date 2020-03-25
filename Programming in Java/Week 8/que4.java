import java.util.*;
public class Pattern4 {
    public static void main(String[] args) {
        Scanner inr = new Scanner(System.in);
	  int l = inr.nextInt();
        // Add the necessary code in the below space
      int i,j,k,c;
      c=l/2;
      if(l%2==0)
        System.out.print("Invalid line number");
      else
      {
        k=c;
        for(i=0;i<c+1;i++)
        {
          for(j=0;j<k;j++)
            System.out.print(" ");
          for(j=0;j<=i;j++)
            System.out.print("* ");
          System.out.println();
          k--;
        }
        k=0;
        for(i=c;i>0;i--)
        {
          for(j=0;j<=k;j++)
            System.out.print(" ");
          for(j=i;j>0;j--)
          {
            System.out.print("*");
            if(j!=1)
              System.out.print(" ");
          }
          if(i!=1)
            System.out.println();
          k++;
        }
      }
    }
}
