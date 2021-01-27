import java.util.*;
public class leapyear {
	public static void main(String[] args) {
		int year; //initialize a placeholder for year
		Scanner sc = new Scanner(System.in); // calls scanner
		System.out.println("Enter Year: "); // prints out directions for user input
		year = sc.nextInt(); // user's input
		leapYear(year); // calls method for the user input	
}
	public static void leapYear(int y) // creates method
	{
		boolean leap = false; // initialize boolean value 
		
		if(y % 4 == 0)  //if year is divisible by 4, then move on to next line, else exit
		{
			if(y % 100 == 0) // if year is divisible by 100 move onto the next line, else exit
			{
				if(y % 400 == 0) // if year is divisible by 400 , return true
				{
					leap = true; // all condition are true
				}
				else
						leap = false; // year is divisible by 4 and 100, not 400
			}
			else
				leap = true; // divisible by 4, not 100, exit
			}
		else
			leap = false; // not divisible by 4
		
		if(leap == true) // if year meets all 3 condition print the following statement, else negate it
		{
			System.out.println(y + " is Leap Year."); // year is leap 
		}
		else 
			System.out.println(y + " is NOT Leap Year."); //  year is not leap
		}
}
