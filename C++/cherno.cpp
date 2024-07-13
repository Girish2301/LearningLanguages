//preprocessors run before compilation
// program loads all contents of preprocessor file

// #pragma once //to ensure file is included once only(.h file exclusive)

#include <bits/stdc++.h>

using namespace std;

#ifndef _STDC_H //to check if variable is defined or not
#define _STDC_H

#include <bits/stdc++.h>

#endif 

#define INTEGER int // defines and replaces INTEGER(name) with value(int)

#if 1 //allows to include/exclude code based on codition

void log(const char* message); // Declaration
void log(const char* message){ // Definition
	std::cout<<message<<std::endl; //char *=string
}

//Functions-

int mul(int a,int b){
	return a*b;
}

void inc(int &val){
	val++;
}

class Player{
public:
	int x,y,speed;

	void move(int a,int b){
		x+=a*speed;
		y+=b*speed;
	}

	void print(){
		std::cout<<x<<" "<<y<<" "<<speed<<std::endl;
	}
};

struct Power{
	int value;
	double p;

	Power():value(0),p(1){} //initializer list best to use otherwise
	//creates extra copy in normal constructor initialization

	void result(){
		std::cout<<pow(value,p)<<std::endl;
	}
};

class Log{
	// Log()=delete; //to delete constructor
public:

	enum Level{
		Error=0,Warning=1,Info=2
	};

	Log(Level level){
		m_level=level;
	}

private:
	Level m_level; //m_ convention for member variable

public:
	void setLevel(Level value){
		m_level=value;
	}

	Level getLevel(){
		return m_level;
	}
	void error(const char* message){
		if(m_level>=Error)
		std::cout<<"{ERROR}:"<<message<<std::endl;
	}
	
	void warn(const char* message){
		if(m_level>=Warning)
		std::cout<<"{WARNING}:"<<message<<std::endl;
	}

	void info(const char* message){
		if(m_level>=Info)
		std::cout<<"{INFO}:"<<message<<std::endl;
	}

	~Log(){
		std::cout<<"Log Object Destroyed"<<std::endl;
	}
};

// class Entity{
// public:
// 	float x,y;
// 	void move(float a,float b){
// 		x+=a;
// 		y+=b;
// 	}
// };

// class Person: public Entity{ //inheriting Entity class
// public:
// 	const char* name;
// 	void printName(){
// 		std::cout<<name<<std::endl;
// 	}
// };

class Printable{
public:
	virtual std::string getClassName()=0;
};

class Entity:public Printable{
public:
	// virtual int getGf()=0; //interface
	virtual std::string getName(){return "Entity";}
	std::string getClassName() override{return "Entity";}
};

class Person:public Entity{
public:
	std::string m_name;
	Person():m_name("Girish"){
		// cout<<"Person is Alive"<<endl;
	}
	Person(const std::string &name){
		m_name=name;
	}
	std::string getName() override {return m_name;}
	std::string getClassName() override{return "Person";}
	~Person(){
		// cout<<"Person is Dead"<<endl;
	}
};

class Copy{
public:
	char *name;
	unsigned int size;
	Copy(const char *n){
		size=strlen(n);
		name=new char[size+1];
		memcpy(name,n,size);
		name[size]=0;
	}

	Copy(const Copy &other):size(other.size){
		name=new char[size];
		memcpy(name,other.name,size);
		name[size]=0;
	}

	~Copy(){
		delete[] name;
	}
};

// struct Entity{
// 	static int x,y;
// };

// int Entity::x,Entity::y; //giving file scope

struct Vector2{
	float x,y;
	Vector2(float a,float b):x(a),y(b){}

	Vector2 operator+(const Vector2 &another) const{
		return Vector2(x+another.x,y+another.y);
	}
	Vector2 operator*(const Vector2 &another) const{
		return Vector2(x*another.x,y*another.y);
	}

};

ostream& operator<<(ostream &stream,const Vector2 &v){
		stream<<v.x<<" "<<v.y<<endl;
		return stream;
}

enum Example{
	a,b,c // by default 0 and other variables inc by 1
};

int main(){ //entry point
	// main function special case no need to return any value

	// Each Cpp file compiled into .obj and glued together in one exe file
	// using linker

	//.obj is binary file and .asm is assembly instruction file

	//constant folding-stores constant value ofconstant values's expression

	//static log() makes it file exclusive function.

	//inline- replaces function call with function body.

	//extern- external linking used for searching for variable in external files

	//DataTypes-int,unsigned int,char,short,long,long long,float,double,bool

	/*log("girish");

	std::cout<<mul(5,3)<<std::endl;
`	*/
	  /* OUTPUT */
  /***************************

  girish
  15

  ***************************/
	//Header Files- used to include files with fn declarations to help linker
	
	//while ".h" used for relative path and <.h> within include directory.

	//Conditions-

	// It makes switch to different machine code instructions based on conditions
	// It creates overhead because of loading all machine instructions in memory

	// int x=5;
	// bool ans=x==5;
	// if(x){ //switches to this machine instruction
	// 	log("girish");
	// }
	// else{ // it doesn't execute but loaded in memory,causes overhead
	// 	log("manish");
	// }

	  /* OUTPUT */
  /***************************

  girish

  ***************************/
	// Loops-

	// For Loop-initialization;condition;execution(after every iteration)
	// for(int i=0;i<5;i++){
	// 	log("hello");
	// }

	  /* OUTPUT */
  /***************************
   
   hello
   hello
   hello
   hello
   hello

  ***************************/

	//While Loop-
	// int i=0;
	// while(i<5){
	// 	log("hi");
	// 	i++;
	// }

	  /* OUTPUT */
  /***************************

  hi
  hi
  hi
  hi
  hi

  ***************************/

	//Do-While Loop- executed once no matter what

	// int i=0;
	// do{
	// 	log("do it");
	// 	i++;
	// }while(i<5);

	  /* OUTPUT */
  /***************************

  do it
  do it
  do it
  do it
  do it

  ***************************/

	//Control Flow statements-

	//Continue-skips iteration

	// for(int i=0;i<5;i++){
	// 	if(i%2)continue; //skips odd iterations
	// 	log("hi");
	// 	std::cout<<i<<std::endl; 
	// }

  /* OUTPUT */
  /***************************

  hi
  0
  hi
  2
  hi
  4

  ***************************/

	//Break-ends loop/swtich statement

	// for(int i=0;i<5;i++){
	// 	if(i==3)break;
	// 	std::cout<<i<<std::endl;
	// }

	/* OUTPUT */
  /***************************

  0
  1
  2

  ***************************/

	//return-returns from function

	// for(int i=0;i<5;i++){
	// 	if(i==2)return 0;
	// 	std::cout<<i<<std::endl;
	// }


	/* OUTPUT */
  /***************************

  0
  1
  ***************************/
 
 	// Pointers-stores address of variables and types doesn't matter for it

 	// int var=8;
 	// int *p=&var;
 	// std::cout<<*p<<std::endl;
 	// *p=10; //dereference via *
 	// std::cout<<*p<<std::endl;

 	// char *c=new char[8]; //pointer to char array which stores address of first element
 	// memset(c,'x',8);
 	// std::cout<<*c; //prints c[0]

  	/* OUTPUT */
  /***************************

  8
  10
  x

  ***************************/

	//Reference(&)-it needs to be initialized

	// int a=5;
	// int &ref=a; //creates alias pointing to same value
	// std::cout<<ref<<" "<<a<<std::endl;
	// inc(ref);
	// std::cout<<ref<<" "<<a<<std::endl;
	
		/* OUTPUT */
  /***************************

  5 5
  6 6

  ***************************/

	// Classes-template for objects,private by default

	// Player p1,p2;
	// p1.x=5,p1.y=3,p1.speed=2;
	// p1.print();
	// p1.move(1,2);
	// p1.print();

		/* OUTPUT */
  /***************************

  5 3 2
  7 7 2

  ***************************/

	// Example Class(Log)-

	// Log l;
	// l.setLevel(Log::Info);
	// l.error("Alerted For error");
	// l.warn("Warned");
	// l.info("Check Information");

		/* OUTPUT */
  /***************************

  {ERROR}:Alerted For error
  {WARNING}:Warned
  {INFO}:Check Information

  ***************************/
	//Struct-public by default,same as class,exist only due to c
	// Used Commonly for creating own datatypes

	// Power p1;
	// p1.value=3;
	// p1.p=2;
	// p1.result();

		/* OUTPUT */
  /***************************

  9

  ***************************/

	//Static-

	// Outside Class- means that variable going to be linked only to that file
	// where it is defined, i.e., linker not going to look for that variable
	// definiton outside of file. 

	//Inside Class- same memory shared with all class instances
	// static funcitons can't use non-static members

	// Entity e;
	// Entity::x=5;
	// Entity::y=8;

	// std::cout<<Entity::x<<" "<<Entity::y<<std::endl;

		/* OUTPUT */
  /***************************

  5 8

  ***************************/

	//Enums-Collection of integer variables and restrict values for integers
	// through this

	// Example x=b;
	// std::cout<<x<<std::endl;
	// x=a;
	// std::cout<<x<<std::endl;
	// x=c;
	// std::cout<<x<<std::endl;

		/* OUTPUT */
  /***************************

  1
  0
  2

  ***************************/

	//Constructors- Function that run whenever obj is initialized
	
	// Log l2(Log::Info);
	// std::cout<<l2.getLevel()<<std::endl;

		/* OUTPUT */
  /***************************

  2

  ***************************/

	//Destructors- Function run when memory is getting disallocated

	// Log l(Log::Error);

	/* OUTPUT */
  /***************************

  Log Object Destroyed

  ***************************/

	//Inheritance- Inheriting code from parent class

	// Person p; //Person is inheriting x,y from Entity class
	// p.move(5,3);
	// std::cout<<p.x<<" "<<p.y<<std::endl;

	/* OUTPUT */
  /***************************

  5 3

  ***************************/

	//Virtual Functions- Functions that generate vtable to correctly map
	// actual & overiding functions i.e., dynamic dispatch.

	// Entity *e=new Entity();
	// Person *p=new Person("Girish");
	// Entity *n=p;

	// std::cout<<e->getName()<<std::endl;
	// std::cout<<n->getName()<<std::endl;

	// without virtual functions-player object treated as entity resulting
	// in wrong mapping of function
		/* OUTPUT */
  /***************************

  Entity
  Entity

  ***************************/

	//with virtual function- recognizes vtable for function and correctly maps it

		/* OUTPUT */
  /***************************

  Entity
  Girish

  ***************************/

	//Interfaces(pure virtual functions)-
	// functions with no body and enforces them to be overridden
	//it needs to be initialized to make objects

	// Printable *p=new Entity();
	// cout<<p->getClassName()<<endl;
	// p=new Person("Hisoka");
	// cout<<p->getClassName()<<endl;

		/* OUTPUT */
  /***************************

  Entity
  Person

  ***************************/

	//Visibility-defines scope of code

	//private-default,only class and friend scope
	//protected- only class and subclass scope
	//public-anyone can access

	//Arrays-collection of elements in continuous manner

	// int arr[5];
	// arr[0]=23;
	// cout<<arr<<endl;

	//array cx11-
	
	// array<int,5> arr;
	// cout<<arr.size()<<endl;

	//arrays in heaps-

	// int *arr=new int[5];
	// arr[2]=6;
	// cout<<arr[2]<<endl;
	// delete[] arr;

	//Strings-collection of characters
	//for char *- \0 acts as null terminating character

	// string s="girish";
	// bool contains=s.find("ir")!=string::npos;
	// cout<<contains<<endl;

		/* OUTPUT */
  /***************************

  1

  ***************************/

	//Types of char*-
	// const wchar_t *ch=L"girish"; //1 or 2 or 4 bytes
	// const char16_t *c=u"girish"; //2 bytes
	// const char23_t *cc=U"girish"; //4 bytes

	//R"string" used for writing paragraphs

	//const-can't change contents of variables

	//first const signifies can't change address of *
	//second const signifies can't change content/value of variable a

	// const int* const a=new int;

	// const methods signifies can't change content of class in fn
	// but can only change mutable variables in fn

	//Mutable with lambdas-

	// int x=8;
	// auto f=[=]() mutable{ 
	// //= means pass by value,& means pass by reference 
	// 	x++; //mutable makes local copy in case of pass by value
	// 	cout<<x<<endl;
	// };
	// f();
	// cout<<x<<endl;

		/* OUTPUT */
  /***************************

  9
  8

  ***************************/

	//Ternary Operator-?:  useful due to return value optimization
	
	// int level=12;
	// string rank=level>10?"Master":"Beginner";
	// cout<<rank<<endl;

			/* OUTPUT */
  /***************************

  Master

  ***************************/

	//Explicit keyword-removes implicit conversion

	// Operator Overloading- changing operator functionalities

	// Vector2 pos(0.4f,0.6f);
	// Vector2 speed(0.2f,0.7f);
	// Vector2 power(1.1f,1.1f);
	// Vector2 result=pos+speed*power;
	// cout<<result;

			/* OUTPUT */
  /***************************

  0.62 1.37

  ***************************/

	//this-*ptr to current object instance

	//Smart Pointers-automate new and delete mechanism

	// Unique pointer-destroyed when out of scope,can't copy them
	{
		// unique_ptr<Person> p(new Person()); OR
		// unique_ptr<Person> p=make_unique<Person>();
		// cout<<p->m_name<<endl;

		/* OUTPUT */
  /***************************

  Person is Alive
  Girish
  Person is Dead

  ***************************/

	}

	//Shared Pointer-used count of references and whenever 0 memory freed

	// works fine but not recommended due to allocation happens two times.
	// shared_ptr<Person> p(new Person());

	//Recommended-
	// shared_ptr<Person> p=make_shared<Person>();

	//Weak Pointer-doesn't increase ref count and whenever original dies it dies
	// weak_ptr<Person> p;
	// {
	// 	shared_ptr<Person> sharedp=make_shared<Person>();
	// 	p=sharedp;
	// } //here ref becomes 0 and destroyed shared pointer and weak pointer too

		/* OUTPUT */
  /***************************

  Person is Alive
  Person is Dead

  ***************************/

	//	Shallow copy-takes all variables and copy its contents

	// Copy a("Girish");
	// Copy b=a;
	// b.name[2]='g'; //copies address of ptr instead of name's value
	// cout<<a.name<<endl;
	// cout<<b.name<<endl;
	//thus called shallow copy and creates problem incase of dynamic obj

		/* OUTPUT */
  /***************************

  Gigish
  Gigish

  ***************************/

	//Deep copy-copy contents of dynamic obj using copy constructor

	// Copy a("Girish");
	// Copy b=a;
	// b.name[2]='g';
	// cout<<a.name<<endl;
	// cout<<b.name<<endl;

		/* OUTPUT */
  /***************************

  Girish
  Gigish

  ***************************/


















}
#endif