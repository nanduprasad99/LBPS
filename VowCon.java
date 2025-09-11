//Write a program to check if a given character is a vowel or a consonant.
import java.util.Scanner;
class VowCon{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter Character");
		char ch = sc.next().charAt(0);

		ch = Character.toLowerCase(ch);

		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			System.out.println("Vowel");
		}
		else{
			System.out.println("Consonent");
		}
	}
}