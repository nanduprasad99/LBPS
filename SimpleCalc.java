import java.util.Scanner;
class SimpleCalc{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Number 1 ");
		int a = sc.nextInt();


		System.out.println("Enter Number 1 ");
		int b = sc.nextInt();


		System.out.println("Enter Case : \n 1 - Addition \n 2 - Substraction \n 3 - Multiplication \n 4 - Division");
		int n = sc.nextInt();

		int result;

		switch (n) {
		case 1:{
			System.out.println(result = a+b);
			break;
			
		}
	    case 2:{
	    	System.out.println(result = a-b);
	    	break;
	    }
		case 3:{
	    	System.out.println(result = a*b);
	    	break;
	    }
		case 4:{
	    	System.out.println(result = a/b);
	    	break;
	    }
		default :
		System.out.println("Invalid Input");
		}


	}
}