//preprocessors run before compilation
// program loads all contents of preprocessor file

// #pragma once //to ensure file is included once only(.h file exclusive)

#include <bits/stdc++.h>

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

struct Entity{
	static int x,y;
};

int Entity::x,Entity::y; //giving file scope

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



}
#endif