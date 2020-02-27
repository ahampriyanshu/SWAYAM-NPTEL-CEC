public class Question42 { 
	public static void main(String args[]){
		int year; // integer type variable to store year	
java.util.Calendar current = java.util.Calendar.getInstance();
 year = current.get(current.YEAR);
		// Print the current Year
		System.out.println("Current Year: "+year);
}
}
