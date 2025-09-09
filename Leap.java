import java.util.Scanner;
class Leap{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter year: ");
        int num = sc.nextInt();

        if(num%4==0){
        	System.out.println(num + " is a Leap year");
        }
        else{
        	System.out.println(num + " is not a Leap year");
        }

	}
}