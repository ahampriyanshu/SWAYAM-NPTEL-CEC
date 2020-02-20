import java.util.Scanner; //This package for reading input
public class Fibonacci { 
    
    public static void main(String args[]) { 
	 Scanner sc = new Scanner(System.in);
	 int n=sc.nextInt(); //Read an integer
        System.out.println(fib(n)); //Generate and print the n-th Fibonacci                
                                     //number
    } 
 static int fib(int n) {
int i=0,j=1,z=0;
	for(int c=0;c<n;c++)
	{
	if(c<=1)
    {
		z=c;
    }
	else
	{
	z=i+j;
	i=j;
	j=z;
	}
    }
return z;
}
}
