import java.util.Scanner;
class CompInt{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Principle:");
		int p = sc.nextInt();

		System.out.println("Enter rate of interest:");
		double r = sc.nextDouble();

		System.out.println("Enter no of times compounded:");
		int n = sc.nextInt();

		System.out.println("Enter no of years:");
		int t = sc.nextInt();


		int x=n*t;

		double base = (1 + r/n);
		double power= 1.0;


		for(int i=0;i<x;i++){
			
			power = power*base;
		}

		double A = p * power;
		double B = A - p;
		System.out.println("compounded interest is " +B);
	}
}

//Calculate the compound interest on an investment using the formula: A = P * (1 + r/n)^(n*t).