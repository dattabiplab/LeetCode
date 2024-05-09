#include <bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
using namespace std;

// single level inheritance
class Animal	// parent class
{
public:
	int age;
	int weight; 
	void eat()
	{
		cout<<"Eating"<<endl;
	}
}; 

class dog:public Animal		// child class
{

};

// multi-level inheritance
class Fruit
{
public: 
	string name = "fruit ";
};
class Mango:public Fruit
{
public:
	int wt = 1;
};
class Alphanso:public Mango
{
public:
	string colour = " orange";
};

// multiple inheritance
class A
{
public: 
	int Physics = 80;
	int Chemistry = 99;
};
class B
{
public:
	int Chemistry = 90;
};
class C: public A, public B
{
public:
	int Maths = 100;
};
// Hierarchical inheritance
class car
{
public:
	int weight = 150;
	int size = 4;
	void speedUp()
	{
		cout<<"Speeding Up"<<endl;
	}
};
class Scorpio: public car
{

};
class Fortuner: public car
{

};

// Polymorphism
// Compile-time Polymorphism
class poly
{
public:
	// function overloading
	int sum(int a ,int b)
	{
		return a+b;
	}
	int sum(int a ,int b, int c)
	{
		return a+b+c;
	}
	int sum(int a ,float b)
	{
		return a+b;
	}
};
class Param
{
public:
	int val;
	// operator overloading
	void operator+(Param& obj)
	{
		int value1 = this->val;
		int value2 = obj.val;
		cout<<value2-value1<<endl;
	}
};
// Run-time Polymorphism
class Animals
{
public:
	 void speak()
	{
		cout<<"Speaking"<<endl;
	}
};
class Dog:public Animals
{
public:
	// override
	void speak()
	{
		cout<<"Barks"<<endl;
	}
};
int main()
{
// single level inheritance
	dog d1;
	d1.eat();
// multi-level inheritance
	Alphanso a1;
	cout<<a1.name<<a1.wt<<a1.colour<<endl;
// multiple inheritance
	C kai;
	cout<<kai.Physics<<" "<<kai.B::Chemistry<<" "<<kai.Maths<<endl;
// Hierarchical inheritance
	Scorpio s1;
	cout<<s1.weight<<endl;
	Fortuner f1;
	f1.speedUp();

// Polymorphism
// Compile-time Polymorphism
	// function overloading
	poly math;
	cout<<math.sum(1,2)<<endl;
	cout<<math.sum(1,2,11)<<endl;
	cout<<math.sum(1,5.12f)<<endl;	
	// operator overloading
	Param object1, object2;
	object1.val = 12;
	object2.val = 24;

	object1 + object2;

// Run-time Polymorphism
	// Normal overriding
	// Animals a;
	// a.speak();

	// Dog d2;
	// d2.speak();		// this one

	// Animals* a = new Animals();
	// a->speak();

	// Dog* d2 = new Dog();
	// d2->speak();		// this one

	// Upcasting
	Animals* a = new Dog();
	a->speak();

	Dog* b =(Dog* ) new Animals;
	b->speak();
}