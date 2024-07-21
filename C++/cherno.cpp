//preprocessors run before compilation
// program loads all contents of preprocessor file

// #pragma once //to ensure file is included once only(.h file exclusive)

#include <bits/stdc++.h>
#include<thread>

#define PI 3.14
using namespace std;
using umap=unordered_map<string,int>;

// #define _STDC_H
// #ifndef _STDC_H //to check if variable is defined or not

// #include <bits/stdc++.h>

// #endif 

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

template<typename T> //template

void print(T value){
	cout<<value<<endl;
}

void hello(){
	cout<<"Hello"<<endl;
}

void printVal(int value){
	cout<<"Value: "<<value<<endl;
}
void printVec(vector<int> &v,void (*fun)(int)){
	for(auto &item:v)fun(item);
}

namespace myScope{
	namespace myFunctions{
		void print(){
			cout<<"This is myScope myFunctions"<<endl;
		}
	}
}

struct Type{
public:
	int x,y;
	int *getPositions(){
		return &x;
	}
};


void work(){
	using namespace std::literals::chrono_literals;
	while(true){
		std::cout<<"I am working"<<std::endl;
		// std::this_thread::sleep_for(2s);
	}
}

struct Vec2{
	int x,y;
};

void print(Vec2 &v){
	cout<<v.x<<" "<<v.y<<endl;
}

class A{
public:
	virtual void Hello(){};
	// A(){cout<<"Base Constructor"<<endl;}
	// virtual ~A(){cout<<"Base Destructor"<<endl;}
};
class B:public A{
public:
	// B(){cout<<"Derived Constructor"<<endl;}
	// ~B(){cout<<"Derived Destructor"<<endl;}
};

class C:public A{
public:
};

optional<string> Read(string path){
	ifstream stream(path);
	if(stream){
		string result="read";
		stream.close();
		return result;
	}
	return {};
}

vector<future<void>> futures; // required to store async fns
static mutex m; //for locking resources
static void printdata(vector<long long> &data,long long i){
	lock_guard<mutex> lock(m);
	long long go_till=i+10;
	for(long long x=i;x<go_till;x++){
		cout<<data[x]<<" ";
	}
	//unlocks mutex after every iteration
}

static uint32_t allocations=0;
void* operator new(size_t size){
	allocations++;
	return malloc(size);
}

// Hardcore Profiling-

#define PROFILE_SCOPE(name) InstrumentTimer timer##__LINE__(name)
#define PROFILE_FUNC() PROFILE_SCOPE(__FUNCTION__);
struct ProfileResult
{
    string Name;
    long long Start, End;
    uint32_t ThreadID;
};

struct InstrumentationSession
{
    std::string Name;
};

class Instrumentor
{
private:
    InstrumentationSession* m_CurrentSession;
    std::ofstream m_OutputStream;
    int m_ProfileCount;
public:
    Instrumentor()
        : m_CurrentSession(nullptr), m_ProfileCount(0)
    {
    }

    void BeginSession(const std::string& name, const std::string& filepath = "results.json")
    {
        m_OutputStream.open(filepath);
        WriteHeader();
        m_CurrentSession = new InstrumentationSession{ name };
    }

    void EndSession()
    {
        WriteFooter();
        m_OutputStream.close();
        delete m_CurrentSession;
        m_CurrentSession = nullptr;
        m_ProfileCount = 0;
    }

    void WriteProfile(const ProfileResult& result)
    {
        if (m_ProfileCount++ > 0)
            m_OutputStream << ",";

        std::string name = result.Name;
        std::replace(name.begin(), name.end(), '"', '\'');

        m_OutputStream << "{";
        m_OutputStream << "\"cat\":\"function\",";
        m_OutputStream << "\"dur\":" << (result.End - result.Start) << ',';
        m_OutputStream << "\"name\":\"" << name << "\",";
        m_OutputStream << "\"ph\":\"X\",";
        m_OutputStream << "\"pid\":0,";
        m_OutputStream << "\"tid\":" << result.ThreadID << ",";
        m_OutputStream << "\"ts\":" << result.Start;
        m_OutputStream << "}";

        m_OutputStream.flush();
    }

    void WriteHeader()
    {
        m_OutputStream << "{\"otherData\": {},\"traceEvents\":[";
        m_OutputStream.flush();
    }

    void WriteFooter()
    {
        m_OutputStream << "]}";
        m_OutputStream.flush();
    }

    static Instrumentor& Get()
    {
        static Instrumentor instance;
        return instance;
    }
};


class InstrumentTimer{
	const char* m_name;
	bool m_stop;
	chrono::time_point<chrono::high_resolution_clock> m_start;
public:
	InstrumentTimer(const char* name):m_name(name),m_stop(false){
		m_start=chrono::high_resolution_clock::now();
	}
	void stop(){
		auto m_end=chrono::high_resolution_clock::now();
		long long start = chrono::time_point_cast<chrono::microseconds>(m_start).time_since_epoch().count();
        long long end = chrono::time_point_cast<chrono::microseconds>(m_end).time_since_epoch().count();
		// cout<<m_name<<":"<<end-start<<endl;
		uint32_t threadID = std::hash<std::thread::id>{}(std::this_thread::get_id());
		Instrumentor::Get().WriteProfile({m_name,start,end,threadID}); 
		m_stop=true;
	}
	~InstrumentTimer(){
		if(!m_stop)stop();
	}
};	

void print_hello(){
	PROFILE_FUNC();
	for(int i=0;i<1000;i++){
		cout<<"Hello: "<<i<<endl;
	}
}

void sqrt_hello(){
	PROFILE_FUNC();
	for(int i=0;i<1000;i++){
		cout<<"Hello: "<<sqrt(i)<<endl;
	}
}

void benchmark(){
	PROFILE_FUNC();
	cout<<"Running Benchmarks:"<<endl;
	thread a([](){print_hello();});
	thread b([](){sqrt_hello();});
	a.join();
	b.join();
}

class Random{
private:
	static Random m_instance;
	Random(){}
public:
	static Random& Get(){
		static Random m_instance;
		return m_instance;
	}

	Random(const Random&)=delete;
	int random(int lb,int ub){
		srand(time(0));
		return rand() % (ub - lb + 1)+lb;
	}
};

class String{
	char *name;
	uint32_t size;
public:
	String()=default;

	String(const char *data){
		cout<<"String Created"<<endl;
		size=strlen(data);
		name=new char[size];
		memcpy(name,data,size);
	}

	String(const String& data){
		cout<<"String Copied"<<endl;
		size=data.size;
		name=new char[size];
		memcpy(name,data.name,size);
	}

	String(String&& data) noexcept{ //move constructor
		cout<<"String Moved"<<endl;
		size=data.size;
		name=data.name; //just moving pointer

		data.size=0;
		data.name=NULL; //to be done as it calls destructor leading to data loss
	}

	void Print(){
		for(uint32_t i=0;i<size;i++)
			printf("%c",name[i]);
		printf("\n");
	}

	String& operator=(String&& other){
		if(this!=&other){
			cout<<"String Moved"<<endl;
			delete[] name; //delete existing data if it exists
			size=other.size;
			name=other.name;
			other.size=0;
			other.name=NULL; 
		}
		return *this;
	}
	~String(){
		cout<<"String Destroyed"<<endl;
		delete name;
	}

};

class Human{
	String name;
public:
	Human(const String &data):name(data){}
	Human(String&& other):name((String&&)other){ } //calls move constructor of String
	void PrintName(){
		name.Print();
	}
};

template<typename Vector>
class VectorIterator{

public:
	using valueType=typename Vector::valueType;
	using PointerType=valueType*;
	using RefType=valueType&;

private:
	PointerType ptr;

public:
	VectorIterator(PointerType p):ptr(p){}

	VectorIterator& operator++(){
		ptr++;
		return *this;
	}

	VectorIterator operator++(int){
		VectorIterator it=*this;
		++(*this);
		return it;
	}

	VectorIterator& operator--(){
		ptr--;
		return *this;
	}

	VectorIterator operator--(int){
		VectorIterator it=*this;
		--(*this);
		return it;
	}

	RefType operator[](int index){
		return *(ptr+index);
	}

	PointerType operator->(){
		return ptr;
	}

	RefType operator*(){
		return *ptr;
	}

	bool operator==(const VectorIterator& other) const{
		return ptr==other.ptr;
	}

	bool operator!=(const VectorIterator& other) const{
		return !(*this==other);
	}

};

template<typename T>
class Vector{
	T* data=nullptr;
	size_t size=0;
	size_t capacity=0;

	void ReAlloc(int new_capacity){
		// T* new_data=new T[new_capacity]; //this calls destructors
		// T* new_data=(T*)::operator new(new_capacity*sizeof(T));
		T* new_data=static_cast<T*>(::operator new(new_capacity*sizeof(T)));
		
		if(new_capacity<size)size=new_capacity;
		for(size_t i=0;i<size;i++){
			// new_data[i]=move(data[i]);
			new (&new_data[i]) T(std::move(data[i]));
			data[i].~T();
		}

		// delete[] data;
		::operator delete(data,capacity*sizeof(T));

		data=new_data;
		capacity=new_capacity;
	}

public:
	using valueType=T;
	using iterator=VectorIterator<Vector<T>>;

	Vector():size(0),capacity(2){
		ReAlloc(2);
    }

	void push_back(const T& value){
		if(size>=capacity)ReAlloc(capacity+capacity/2); //1.5x
		data[size]=value;
		size++;
	}

	void push_back(T&& value){
		if(size>=capacity)ReAlloc(capacity+capacity/2); //1.5x
		// data[size]=move(value);
		new(&data[size])T(value); 
		size++;
	}

	template<typename ...args>

	T& emplace_back(args&&... a){ //takes list of args
		if(size>=capacity)ReAlloc(capacity+capacity/2); //1.5x

		new(&data[size])T(forward<args>(a)...); //inplace data

		// ... for unpacking and storing indefinite arguments
		// data[size]=T(forward<args>(a)...); //move
		return data[size++];
	}

	const T& operator[](size_t index)const{
		if(index>=size)return throw std::out_of_range("Index out of range");
		return data[index];
	}

	T& operator[](size_t index){
		if(index>=size)return throw std::out_of_range("Index out of range");
		return data[index];
	}

	void print(){
		for(int i=0;i<size;i++){
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}

	void pop_back(){
		if(size>0){
			size--;
			data[size].~T();
		}
	}

	void clear(){
		for(size_t i=0;i<size;i++)
			data[i].~T();
		size=0;
	}

	size_t my_size()const{return size;}

	~Vector(){
		clear();
		// delete[] data; // this calls destructors
		:: operator delete(data,capacity*sizeof(T));
	}

	iterator begin(){
		return iterator(data);
	}

	iterator end(){
		return iterator(data+size);
	}

};

class orange{
public:
	operator float(){return 5.5f;}
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

	// Inside Local Scope- same memory shared all instances of fn


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

	//Dynamic arrays/vectors-underlying storage on heap
	//if vector size exceeds capacity*=2 

	// vector<int> v;

	// if we know rough idea of size better reserve memory for it
	// as resizing creates additional copies creating overhead

	// v.reserve(3);
	// v.emplace_back(1);

	// creates two copies as object is initialized in main stackframe
	// then reassigned to where vector memory is allocated
	// optimize via emplace_back
	
	// v.emplace_back(2);
	// cout<<v.size()<<endl;
	// v.erase(v.begin());
	// cout<<v.size()<<endl;

	//static linking-whenever exe is executed it loads whole libraries linked

	//Dynamic linking-whenever exe is executed we can dynamically link components of library in runtime
	// .dll files are used for it
	// dll.lib files-static library containing locations of fn,symbols
	//.lib file contain definition of fn.
	// .h files contain declaration of fn.
	//make sure .dll in same folder as .exe file

	//multiple return values- convert to same type
	//or use struct datatypes

	//or use tuple-allows to make collection of different datatype elements

	// tuple<string,int,float> p=make_tuple("girish",21,50.5);
	// cout<<get<0>(p)<<" "<<get<1>(p)<<" "<<get<2>(p)<<endl;


		/* OUTPUT */
  /***************************

  girish 21 50.5

  ***************************/

	//Templates- it replaces typename/class in template defined units
	//doesn't exist till call it

	// print<int>(5); //explicit definiton in <>
	// print("girish"); //implicit conversion
	// print(8.73);

		/* OUTPUT */
  /***************************

  5
  girish
  8.73

  ***************************/	

	//Stack memory-pointer where variables are stored high to low,continuous allocation
	//Heap-memory allocation by freelist and supports high size

	//Macros-variables to replace some defined values allocated in compile time
	// cout<<PI<<endl; //3.14

	//auto-automatically selects dtype of variable
	// auto a=5;
	// int b=a;
	// cout<<b<<endl; //5

	//Function pointers-pointer to function to store in variables as reference

	// auto p=hello; //type is void(*p)()
	// p(); //Output-Hello 

	// vector<int> v={1,2,3,4,5,6};
	// printVec(v,printVal); //printVal is function pointer

		/* OUTPUT */
  /***************************

  Value: 1
  Value: 2
  Value: 3
  Value: 4
  Value: 5
  Value: 6

  ***************************/	

	//Lambdas-anonymous functions

	// vector<int> v={1,2,3,4,5,6};
	// auto lambda=[](int val){cout<<"Value: "<<val<<endl;}
	// //[] captures,() params,{} body
	// printVec(v,lambda);
	
	//Namespaces-
	//using mutliple namespaces can use conflicts and undefined behaviour
	// namespaces exist to reduce naming conflicts

	// namespace x=myScope::myFunctions; //simplify namespaces
	// x::print();

		/* OUTPUT */
  /***************************

  This is myScope myFunctions


  ***************************/	

	//Threads-

	// thread worker(work);
	// worker.join(); // acts like wait() i.e., wait for worker thread
	//to get finished in main thread
	// int i=0;
	// while(i<5){
	// 	cout<<"I am not working"<<endl;
	// 	i++;
	// }

		/* OUTPUT */
  /***************************
	//without join()
	I am not working
	I am not working
	I am not working
	I am not working
	I am not working
	terminate called without an active exception
	I am working
	I am working
	I am working
	I am working
	I am working

  ***************************/	

	//Timing-

	// using namespace std::literals::chrono_literals;
	// auto start=std::chrono::high_resolution_clock::now();
	// int i=0;
	// while(i<10000000){i++;}
	// auto end=std::chrono::high_resolution_clock::now();

	// std::chrono::duration<double> duration=end-start;
	// cout<<duration.count()<<"s"<<endl;

		/* OUTPUT */
  /***************************
	
	0.02227s

  ***************************/	

	//multi-dim arrays-

	// int **parr=new int*[10];
    // for(int i=0;i<50;i++)delete[] parr[i];
	// delete[] parr;

	//Sorting- best way is using std::sort()
	// vector<int> v={1,3,2,4,6};
	// sort(v.begin(),v.end());
	// for(auto it:v)cout<<it<<" ";

		/* OUTPUT */
  /***************************
	
	1 2 3 4 6 

  ***************************/	

	// Type Punning- treating same memory as of different type
	// int a=5;
	// double b=a; //int to double implicit conversion

	// Type t={5,8};
	// int* arr=t.getPositions(); //struct with into int treated as int*
	// cout<<t.x<<" "<<t.y<<endl;
	// arr[0]=1,arr[1]=5;
	// cout<<arr[0]<<" "<<arr[1]<<endl;

		/* OUTPUT */
  /***************************
	
	5 8
	1 5

  ***************************/	

	//Union-collection of different variables with same value and only member

	// struct Union{
	// 	union{
	// 		double a;int b;
	// 	};
	// };
	// Union u;
	// u.b=2;
	// cout<<u.a<<" "<<u.b;

		/* OUTPUT */
  /***************************
	
	1.79233e-307 2
	//double value is double representation of int b

  ***************************/	

	//another usage-type punning

	// struct Vec4{
	// 	union{
	// 		struct{int x,y,a,b;}; //one member all next members will have same memory size

	// 		struct{Vec2 j,k;}; // So here j=x,y and k=a,b
	// 	};
	// };

	// Vec4 v={1,2,3,4};
	// cout<<v.x<<" "<<v.y<<" "<<v.a<<" "<<v.b<<endl;
	// print(v.j);print(v.k);

		/* OUTPUT */
  /***************************
	
	1 2 3 4
	1 2
	3 4

  ***************************/	

	//virtual destructors-issue is when we make base* and allocate derived object
	//it doesn't call derived destructor resulting in memory leak
	// To fix this we should make base class destructor virtual

	// A* d=new B();
	// delete d; 

		/* OUTPUT */
  /***************************
	
	Base Constructor
	Derived Constructor
	Derived Destructor
	Base Destructor

  ***************************/	

	//Casting-
	// float a=5.3;
	// int b=(int)a; //c-style casting
	// cout<<b<<endl; //5

	// // C++ cast-static,dynamic,reinterpret,const
	// int c=static_cast<int>(a);
	// cout<<b<<endl; //5

	//Dynamic casting-evaluated at runtime by RTI like inheritance heirarchy checking
	//Example- A ->B,C
	// A* b=new B();
	// A* c=new C(); 

	// B* p0=dynamic_cast<B*>(b);
	// B* p1=dynamic_cast<B*>(c);

	// cout<<(p0?"P0 hai\n":"NULL\n"); //p0 hai is due to inheritance checking
	// cout<<(p1?"P1 hai\n":"NULL\n"); //NULL is due to inheritance checking

	//Structured Bindings[]-using it with tuple is powerful

	// tuple<string,int> person={"girish",21};
	// string name;int age;
	// tie(name,age)=person; // dereference it into multiple variables
	// cout<<name<<" "<<age<<endl;

	// auto[x,y]=person; //C++ 17 version
	// cout<<x<<" "<<y<<endl;

			/* OUTPUT */
  /***************************
	
	girish 21
	girish 21

  ***************************/	

	//Optional-to check whether exists or not and give default value

	// optional<string> x=Read("D:\\code\\input.in");
	// cout<<x.value_or("NULL")<<endl;

			/* OUTPUT */
  /***************************
	
	read

  ***************************/	

	//Variant-variable with multiple types

	// variant<string,int,float> v=23;
	// cout<<get<int>(v)<<endl;
	// v="girish";
	// cout<<get<string>(v)<<endl;

			/* OUTPUT */
  /***************************
	
	23
	girish


  ***************************/

	//Any-store any datatype but store large datatype dynamically,reducing performance

	// any a=make_any<int>(23);
	// cout<<*any_cast<int>(&a)<<endl;
	// a=make_any<string>("girish");
	// cout<<*any_cast<string>(&a)<<endl;

			/* OUTPUT */
  /***************************
	
	23
	girish


  ***************************/

	//Async-run programs on threads

	// vector<long long> data(10000000);
	// for(int i=0;i<10000000;i++){data[i]=i;}
	// for(int i=0;i<10000000;i+=10){
	// 	//futures need to be maintained to store async fns bcoz destroyed after every iteration
	// 	futures.push_back(async(launch::async,printdata,ref(data),i));
	// }

	// for(auto &f:futures){
	// 	f.get(); //ensures all async fns are done executing
	// }

	//Faster Strings-
	//strings and its operation like =,substr() allocate memory dynamically,reducing performance

	//stringview-it doesn't allocate new memory,instead look into existing memory

	// string name="Girish Kumar";
	// string_view firstName(name.c_str(),6);
	// string_view lastName(name.c_str()+7,5);

	// cout<<firstName<<"\n"<<lastName;

			/* OUTPUT */
  /***************************
	
	Girish
	Kumar

  ***************************/

	// Visual Benchmarking-using browser tracing
	// Instrumentor::Get().BeginSession("Profile");
	// benchmark();
	// Instrumentor::Get().EndSession();

	//Singletons-single instance of class
	// cout<<Random::Get().random(2,10);

	//Small String Optimization-15 or less char strings allocated in stack instead of heap

	//lvalues and rvalues-
	// const int& x=10;
	// cout<<x<<endl;

	// &&-lvalue reference only accepts temp rvalues
	// int a=5;
	// int c=6;
	// int &&d=a; //gives error
	// int&& b=(a+c);

	//Argument evaluation order- undefined
	// Postfix expression evaluated in sequence but asc/desc order

	// int a=0;
	// cout<<a++<<++a<<endl; //warning undefined behaviour
	
	//Move semantics-
	// Human h(String("Girish"));
	// h.PrintName();

			/* OUTPUT */
  /***************************
	//without lvalue reference extra copy is generated
	String Created
	String Copied
	String Destroyed
	Girish
	String Destroyed

  ***************************/

	// Human h(String("Girish"));
	// h.PrintName();

			/* OUTPUT */
  /***************************
	//with lvalue reference data is only moved
	String Created
	String Moved
	String Destroyed
	Girish
	String Destroyed


  ***************************/	

	//move()- moves lvalue reference to other variable

	// String s="Helo";
	// String t(move(s));

			/* OUTPUT */
  /***************************
	String Created
	String Moved
	String Destroyed
	String Destroyed

  ***************************/

	//Own Vector-

	// Vector<string,2> v;
	// v.push_back("Girish");
	// v.push_back("kumar");
	// v.push_back("codes");
	// v.emplace_back("hello");
	// v.print();
	// cout<<v.my_size()<<endl;

			/* OUTPUT */
  /***************************
	Girish kumar codes hello 
	4

  ***************************/

	//Iterators-

	// vector<int> v={1,2,3,5};
	// for(vector<int>::iterator it=v.begin();it!=v.end();it++){
	// 	cout<<*it<<" ";
	// }

			/* OUTPUT */
  /***************************
	1 2 3 5 

  ***************************/

	// Own Vector Iterator-

	// Vector<string> v;
	// v.push_back("Girish");
	// v.push_back("kumar");
	// v.push_back("codes");
	// v.emplace_back("hello");

	// for(Vector<string>::iterator it=v.begin();it!=v.end();it++){
	// 	cout<<*it<<endl;
	// }

			/* OUTPUT */
  /***************************
	Girish
	kumar
	codes
	hello

  ***************************/	

	// Memory storage in stack-
	// Example-int a=5; 
	// 4 byte memory is represented as 00 00 00 00.in hex form 
	// Every byte/0 is 0-15.
	//a=05 00 00 00 will be its memory representation form.

	// Bitwise Operators-

	// Internal conversion happens for <<,>> as if used *=2**n or /2**n
	// cout<<(5<<1); //10 bcoz <<-*2**n 
	// cout<<(5>>1); //2 bcoz >>-/2**n 

	//$-both expressions are true(0 and 1)
	// cout<<(0&1); //0
	
	//|-both expressions are true(0 and 1)
	// cout<<(0|1) //1

	//!-changes 0 to 1 and vice versa
	// cout<<(!0); //1

	//^-if both bits are different or not
	// cout<<(0b1010^0b1000); //2 bcoz 2nd bit is different only,so 0b0010 result

	//Map-sorted map (red-black tree)

	// map<string,int> mp;
	// mp["b"]=1;
	// mp["a"]=3;
	// mp["c"]=2;
	// for(auto [x,y]:mp){
	// 	cout<<x<<" "<<y<<endl;
	// }

			/* OUTPUT */
  /***************************
	a 3
	b 1
	c 2

  ***************************/	

	//Unordered_Map-hash table and not sorted

	// unordered_map<string,int> mp;
	// mp["b"]=1;
	// mp["a"]=3;
	// mp["c"]=2;
	// for(auto [x,y]:mp){
	// 	cout<<x<<" "<<y<<endl;
	// }

			/* OUTPUT */	
  /***************************
	c 2
	a 3
	b 1

  ***************************/

	//C++ Project Architecture-
	// Premake-to generate make files and any project files,uses lua
	//Cmake/Makefile-acts as custom build system
	//Core lib->GUI lib/other libs->apps

	//Conversion Operators- convert datatypes
	// orange o;
	// float f=o; //calls orange::float() for conversion
	// cout<<f<<endl;

			/* OUTPUT */	
  /***************************
	5.5

  ***************************/

	//Weak Pointers-used generally with shared pointers
	// It doesn't increase reference count as it makes weak reference
	// so instance of shared pointer destroyed whenever reference count becomes 0
	
	// weak_ptr<string> w;
	// {
	// 	shared_ptr<string> s=make_shared<string>("Girish");
	// 	w=s;
	// 	cout<<(*w.lock())<<endl; //lock() returns shared_ptr assigned
	// }
	// cout<<w.expired()<<endl; //expired as shared_ptr died at end of scope

	// Completed
}
#endif