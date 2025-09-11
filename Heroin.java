import java.util.Scanner;

 class Heroin{
 	public static void main(String[] args) {
 		Scanner sc = new Scanner(System.in);

 		System.out.println("Enter side a:");
 		int a = sc.nextInt();

 		System.out.println("Enter side b:");
 		int b = sc.nextInt();

 		System.out.println("Enter side c:");
 		int c = sc.nextInt();

 		double s = (a+b+c)/2.0;
 		double A = Math.sqrt(s * (s - a) * (s - b) * (s - c));

 		System.out.println("Area is "+A);
 	}
 }








/*Compute the area of a triangle given the lengths of its three sides using Heron's formula.
The formula is as follows:
s = (a + b + c) / 2
A = sqrt(s * (s - a) * (s - b) * (s - c))
where:
a, b, and c are the lengths of the triangle's sides.
s is the semi perimeter (half of the perimeter) of the triangle.
A is the area of triangle*/