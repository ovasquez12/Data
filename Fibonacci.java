import java.util.Scanner;
public class Fibonacci {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in); //calls scanner
		System.out.println("Enter Index number of the Fibonacci sequence: "); // prints directions for user input
		int n = sc.nextInt(); //user input
		 recursiveFibonacci(n); // calls recur method
		 System.out.println("Using recursive to find Fibonacci number: "); //prints out this statement, telling user what method is being used
		 System.out.println(recursiveFibonacci(n)); //prints recur number
		 iterativeFibonacci(n); // calls iterative method
		 System.out.println("Using iterative to find Fibonacci number: "); //prints out this statement, telling user what method is being used
		 System.out.println(iterativeFibonacci(n)); //prints iterative method	 
	} 
	public static int iterativeFibonacci(int n) {
		int a = 0, b = 1, c = 1; // Initializes the first three digits of the fib sequence
		for (int i = 0; i < n; i++) // runs for loop up until the given n index of the sequence
		{
			a = b; // value of b is now a
			b = c; // value of c is now b
			c = a + b; // add a and b to get new c value
		}
		return a; // return last calculated digit found in nth index
	}
	public static int recursiveFibonacci(int n) {
		if(n <= 1) { // outputs n  if number is less than or equal to one.
			return n;
		} else {
			return recursiveFibonacci(n-1) + recursiveFibonacci(n-2); 
			//if n doesn't meet the condition then number is broken down 
			//into two smaller numbers using the recursive method in return : recurfib(n-1) and recurfib(n-2)
			//if neither n value meets the condition it repeat with breaking each down again into another 2 numbers 
			//up until the value meets the condition
			//Eventually those outputs that meet the condition are added to get the fibonacci number found in nth index
		}	
	}
} 
// In my opinion I think the iterative function is better, because it store 2 previous values found in the sequence and 
//adds them into a temporary value and keeps moving forward (looping) up until the nth value 
//where as in recursion the method calls itself every time and breaks down the outputs until condition is met.

