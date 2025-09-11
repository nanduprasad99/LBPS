import java.util.Scanner;
class MonthDays{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Number of the Month: ");
		int month = sc.nextInt();

		if(month<=12 && (month==1)|| (month == 3) || (month == 5) || (month==7) || (month==8)||(month==10)||(month==12)){
			System.out.println("This Month "+ month +" has 31days ");
		}
		else if (month<=12 && month==2){
			System.out.println("This Month "+ month +" has 28days ");
		}
		else if(month<=12 && month>=0){
			System.out.println("This Month "+ month +" has 30days ");
		}
		else{
			System.out.println("Invalid input");
		}


	}
}