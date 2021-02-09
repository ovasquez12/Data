package Lab2;

public class Bovine implements Mammal {
	@Override
	public void speak() {
		System.out.println("MOooO");	
	}
	@Override
	public void eat() {
		System.out.println("chews on grass");
	}
	@Override
	public void sleep() {
		System.out.println("I need 10 hours of sleep");			
	}
	@Override
	public void mate(Mammal x) {
		if(x instanceof Bovine) 
			System.out.println(x + " is a mate of "+ this);
		else
			System.out.println(x + " is not mate of "+ this);
	}
}
