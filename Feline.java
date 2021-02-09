package Lab2;

public class Feline implements Mammal {
	@Override
	public void speak() {
		System.out.print("RAAWwrr");	
	}
	@Override
	public void eat() {
		System.out.println(" *bites their catched cow/bull food*");
	}
	@Override
	public void sleep() {
		System.out.println("I'm fully rested no sleep at this moment");			
	}
	@Override
	public void mate(Mammal x) {
		if(x instanceof Feline)
			System.out.println(x + " is a mate of "+ this);
		else
			System.out.println(x + " is not mate of "+ this);	
	}
}