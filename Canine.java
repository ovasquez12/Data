package Lab2;

public class Canine implements Mammal {
	
	@Override
	public void speak() {
		System.out.println("AWoooo");	
	}
	@Override
	public void eat() {
		System.out.println("I'm hungry so I will find dead cow to eat");
	}
	@Override
	public void sleep() {
		System.out.println("I'm full... I need sleep!....zzzz");			
	}
	@Override
	public void mate(Mammal x) {
		if(x instanceof Canine)
			System.out.println(x + " is a mate of "+ this);
		else
			System.out.println(x + " is not mate of "+ this);	
	}
}