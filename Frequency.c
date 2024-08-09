package lab24;
import java.util.*;

public class Frequency {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		String str;
		System.out.println("Enter the string");
		str=sc.nextLine();
		int frequency=0;
		char ch;
		System.out.println("Enter character");
		ch=sc.next().charAt(0);
		for(int i=0;i<str.length();i++) {
			if(ch==str.charAt(i)) {
				frequency++;
			}
			
		}
		System.out.println("Number of occurance of "+ch+" is "+ frequency );
		
	}

}
