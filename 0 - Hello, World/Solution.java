// print "Hello World" => jump to new line => print input string
import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter any text:");
	    String input=sc.nextLine();
        System.out.println("Hello, World. \n"+input);
        sc.close();
	}
}
