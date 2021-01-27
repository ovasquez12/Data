#include<iostream>
using namespace std;

int iterativeFibonacci(int n) { //creates method to be later called in main
    int a = 0, b = 1, c = 1; //initializes the first three digits of fib sequence
    for(int i = 0; i < n; i++) {
        a = b; //vallue of b is now a
        b = c; //value of c is now b
        c = a + b; //add a and b to get c
    } return a;  //prints last integer calculated
}
int recursiveFibonacci(int n)
{ //creates method to be later called in main
{

    if(n <= 1) {
        return n; // outputs n  if number is less than or equal to one.
    }else
      
     return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
     // above line executes if the number was not <= 1. number is then broken down into two smaller numbers using the function,
// once again it goes back to the 1st condition to see if any of the two new numbers are <= 1, 
//if not then it repeats the function then those two number are broken down into another 2 small numbers until every output is <=1
//add all values <=1, that gives the fibonacci number
     
}return n;
}

int main() {
    
    int n; //initialize nth position
    printf("Enter Index number of the Fibonacci sequence: "); //prints directions for user input
    cin >> n; //user input
    cout << "Using recursive to find Fibonacci number:"; // tells user what method was used to calculate fib number
    cout << recursiveFibonacci(n) << endl; //prints number
    iterativeFibonacci(n); //calls interative method
    cout << "Using iterative to find Fibonacci number:" ; // tells user what method was used to calculate fib number
    cout << iterativeFibonacci(n) << endl; //prints number
} 
