import java.util.*;
public class Pattern2 {
    public static void main(String[] args) {
        Scanner inr = new Scanner(System.in);
	    int l = inr.nextInt();
        // Add the necessary code in the below space
         for(int i=0;i<l;i++)
         {
           for(int j=l-i;j>1;j--)
           {
             System.out.print(" ");
           }
           for(int k=0;k<=i;k++)
           {
             System.out.print("* ");
           }
           System.out.println();
         }
    }
}
