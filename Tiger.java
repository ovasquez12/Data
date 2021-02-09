package Lab2;

public class Tiger extends Feline {
	public void speak() {
		System.out.println("I'm Tiger");
		
		super.speak();
	}
	public String toString() {
		return "Tiger";
	}
}