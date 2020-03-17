 
import java.io.*;  
public class Question2{  
public static void main(String args[]){  
try{
  InputStreamReader r=new InputStreamReader(System.in);  
   BufferedReader br=new BufferedReader(r);  
   String number=br.readLine();  
   int x = Integer.parseInt(number);
   System.out.print(x*x);
}
catch(Exception e){
  System.out.print("Please enter valid data");
}
