import java.util.*;
public class Pattern1 {
public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int   rows = scan.nextInt();
  int k=0,sum=0;
        for(int i=1; i<=rows; ++i,k=0)
        {
            for(int j=1; j<=rows-i; ++j)
            {
                System.out.print("  ");
            }
            while(k != 2 * i - 1 )
            {
                System.out.print("* ");
              	sum = sum + 1;
                ++k;
            }
            System.out.println();
        }
       System.out.println(sum);
    }
}
