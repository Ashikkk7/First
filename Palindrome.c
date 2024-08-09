package lab24;
import java.util.Scanner;

public class Palindrome {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		boolean flag=true;
		System.out.print("Enter your string");
		String str=sc.nextLine();
		int len=str.length();
		for(int i=0;i<(len)/2;i++) {
			if(str.charAt(i) != str.charAt(len-i-1)) {
			   flag=false;
			   break;
		}
		}
	    if(flag) {

			System.out.println(str+ " is Palindrome");
		
		}
		else {
			System.out.println(str+ " is not palindrome");
		}
	}

}

