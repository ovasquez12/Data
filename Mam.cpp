#include <iostream>

using namespace std;

class Mammal
{
	public:

	virtual void sleep()
	{
		cout << "Now I Sleep...Zzzzzz" << endl;
	}

	virtual void speak()
	{
		cout << "pfff" << endl;
	}
  virtual void eat()
	{
		cout << "I will eat" << endl;
	}
   void mate(Mammal *x);
};

class Canine: public Mammal
{
	public:

	virtual void speak()
	{
		cout << "Awoooo" << endl;
	}
  virtual void eat()
	{
		cout << "Im not hungry" << endl;
	}
  virtual void sleep()
	{
		cout << "Already ate... I will continue my nap" << endl;
	}
   virtual void mate(Mammal *x) {
     if(dynamic_cast<Canine*>(x)){
       cout << x <<" IS mate of "<<this<<endl;
       }else {
         cout<< x << " NOT mate of "<<this<<endl;
         }
   }
};
class Bovine: public Mammal {
  public:
  virtual void speak() {
    cout << "MooOMooo" << endl;
  }
  virtual void eat() {
    cout<<"Right now I'm eating grass"<<endl;
  }
  virtual void sleep() {
      cout<<"Later, I'm full and sleepy"<<endl;
  }
   virtual void mate(Mammal *x) {
     if(dynamic_cast<Bovine*>(x)){
       cout << x <<" IS mate of "<< this <<endl;
       }else {
         cout<< x << " NOT mate of "<<this<<endl;
       }
   }
};
class Feline : public Mammal
{
	public:
	
	  virtual void speak()
	{
		cout << "Grrrr"<<endl;
	}
   virtual void eat()
	{
		cout << "I found Cow to eat" << endl;
	}
  virtual void mate(Mammal *x) {
     if(dynamic_cast<Feline*>(x)){
       cout << x <<" IS mate of "<<this<<endl;
       }else {
         cout<< x << " NOT mate of "<<this<<endl;
         }
   }
};


class Wolf: public Canine {
  public:
     virtual void speak() {
      cout << "What's up, I am Wolf ";
    Canine::speak();
    }
};

class Lion: public Feline {
   void speak() {
    cout << "Hey, I am Lion ";
   Feline::speak();
   }
   virtual void sleep() {
		cout << "I still need 6 more hours of sleep" << endl;
	}

};
class Tiger : public Feline {
  void speak() {
    cout << "Hi, I am Tiger ";
    Feline::speak();
  }
  void sleep() {
    cout << "Im fully rested " << endl;
   }
   virtual void eat()
	{
		cout << "I need cow food though" << endl;
	}
};

class Bull: public Bovine {
  public:
   virtual void speak() {
      cout << "Hello, I'm Bull ";
      Bovine::speak();
   }
};

int main()
{
  Bovine *animal4 = new Bull;
  Feline *animal1 = new Lion;
  Feline *animal3 = new Tiger;
  Canine *animal2 = new Wolf;

  animal4->speak();
  animal4->eat();
  animal4->sleep();
  animal4->mate(animal4);
  
  cout<<" "<<endl;

    animal1->speak();
    animal1->eat();
    animal1->sleep();
    animal1->mate(animal4);

    cout<<" "<<endl;
    
    animal3->speak();
    animal3->sleep();
    animal3->eat();
    animal3->mate(animal4);

    cout<<" "<<endl;

  
  animal2->speak();
  animal2->eat();
  animal2->sleep();
  animal2->mate(animal2);

  cout<<" "<<endl;

}