import java.util.*;
public class Question5 {  
    public static void main(String[] args) { 
       try{	
	    String s1="NPTELJAVA"; 
            Scanner inr = new Scanner(System.in);
	    int n = inr.nextInt();
            char c='a';
            
            //Replace the char in string "s1" with the char 'a' at index "n"  and print the modified string 
StringBuilder st= new StringBuilder(s1);
st.setCharAt(n,c);
System.out.print(st);
}
