import java.util.Scanner;
class Question {  //Define a class Question with two elements e1 and e2.
  Scanner sc = new Scanner(System.in);
  int e1 = sc.nextInt(); 
  int e2 = sc.nextInt(); 
 }
public class Question5 {
static void swap(Question t)
{
    int obj;
    obj=t.e1;
    t.e1=t.e2;
    t.e2=obj;
}
public static void main(String[] args) {
   	Question t = new Question();
        swap(t);

    System.out.println(t.e1+" "+ t.e2);     
  }
 
}
