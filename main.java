package Lab2;

public class main {
	public static void main(String[] args) {
		Wolf w1 = new Wolf();
		Lion l1 = new Lion();
		Tiger t1 = new Tiger();
		Bull b1 = new Bull();
		b1.speak();
		b1.eat();
		b1.sleep();
		b1.mate(b1);
		System.out.println();
		l1.sleep();
		l1.speak();
		l1.eat();
		l1.mate(l1);
		System.out.println();
		t1.sleep();
		t1.speak();
		t1.eat();
		t1.mate(t1);
		System.out.println();
		w1.speak();
		w1.eat();
		w1.sleep();
		w1.mate(w1);
		
		
	}
}
