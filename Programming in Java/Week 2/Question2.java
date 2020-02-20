class School { 
    // This is a method in class School
    public void print() { 
		System.out.println("Hi! I am class SCHOOL."); 
    } 
} 
// This is the class named Student
class Student { 
	// This is a method in class Student
    public void print() { 
		System.out.println("Hi! I am class STUDENT"); 
    } 
}

public class Question22{ 
    public static void main(String args[]){
Student s=new Student();
s.print();
School sc=new School();
sc.print();
    }
}
