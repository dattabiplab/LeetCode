#include <bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
using namespace std;

class Animal
{
private:
	int weight;
public:		// everything under this will be public
		// state  
	int age;
	string name;

	// Default constructor
	Animal()
	{
		this->weight = 0;	//if we dont set any weight 0 will be the def weight
		this->age = 0;
		this->name = "";
		cout<<"Default Constructor called"<<endl;
	}
	// Parameterised constructor
	Animal(int age)
	{
		this->age = age; //when we create the animal object we have to pass the age
		cout<<"Parameterised Constructor 1 called"<<endl;
	}
	Animal(int age, int weight)
	{
		this->weight = weight;	
		this->age = age; //when we create the animal object we have to pass the age & weight
		cout<<"Parameterised Constructor 2 called"<<endl;
	}
	Animal(int age, int weight, string name)
	{
		this->weight = weight;	
		this->age = age; //when we create the animal object we have to pass the age,wt & name
		this->name = name;
		cout<<"Parameterised Constructor 3 called"<<endl;
	}
		// copy constructor
	Animal(Animal& obj)
	{
		this->weight = obj.weight;	
		this->age = obj.age; //when we create the animal object we have to pass the age,wt & name
		this->name = obj.name;
		cout<<"Copy Constructor called"<<endl;
	}
		// behaviour
	
	void sleep()
	{
		cout<<"Sleeping"<<endl;
	}
	void eat()
	{
		cout<<"Eating"<<endl;
	}
	// getter
	int getWeight()
	{
		return weight;
	}
	// setter
	void setWeight(int weight)
	{
		this->weight = weight;
	}
	// destructor
	~Animal()
	{
		cout<<"Destructor called"<<endl;
	}
};

int main()
{
	// cout<<"Size of Class: "<<sizeof(example)<<endel;

	// OBJECT CREATION
	{// STATIC MEMORY
	
		Animal tiger(35);	// object
	
		// accessing public states
		// tiger.age = 12;
		tiger.name = "liger";
		cout<<"Age is "<<tiger.age<<endl;
		cout<<"Name is "<<tiger.name<<endl;
	
		// accessing public behaviours
		tiger.eat();
	
		// accessing private states
		// tiger.weight();	//gives error since its a private member
	
		// accessing public states by setters & getters
		tiger.setWeight(250);
		cout<<"Weight is "<<tiger.getWeight()<<endl;
	
		// DYNAMIC MEMORY
		Animal* bird = new Animal(50);
	
		// (*bird).age = 12;
		bird->name = "Phoenix";
		cout<<"Name of bird is "<<bird->name<<endl;
		cout<<"Age of bird is "<<bird->age<<endl;
		bird->eat();
	
		Animal* dog = new Animal(5,40,"Husky");		// parameterised constructor
			// copy
		// Animal new_tiger = tiger;
		// Animal new_tiger2(tiger);
		// Animal new_bird = *bird;
		// Animal new_bird2(*bird);
	
		delete bird;	// manually calling destructor for dynamic object
	}
}