import java.io.*;
import java.util.*;
public class javaforandroid {
	interface Item {
		//interfaces definition
	//it should be public,static or final 
		public boolean schedule(Date day);
		public void completed();
	}
	public static abstract class hisoka{
		public void hisoka2(){System.out.println("hisoka is great");}
		public abstract void chiseigen();
	}
	public static void summy(int x, int y) {
		int sum = x + y;
		System.out.println("Calculation Result:" + sum);
	}
	public static boolean endDay(Item toDo, Date tom) { //Interface's usage
		if (toDo.schedule(tom)) {
			toDo.completed();
			return true;
		} else return false;
	}
	public static void isnlastIndexofv(Vector<Integer> v,int n){
		if(v.size()==n)System.out.println("Tru hai vro");
		if(v.size()<n)throw new ArrayIndexOutOfBoundsException(n+">"+v.size());
	}
	public static void main(String args[]) {
		// int a = 10;
		// double b = 23;
		// double x = (double)(32/5);
		// int y = 500;
		// System.out.println("\"Hello World\" ");
		// System.out.println(a +" "+ b);
		// System.out.println(b); //it converted 23 to floating point that
		//method is called coercion//
		// System.out.println("Hello World2u");
		// System.out.println(Math.floor(b)+" "+Math.ceil(b));
		// System.out.println(a++);
		// if((a<b) && (b>a))System.out.println("b:a u are smaller "+"😻");
		// else{System.out.println("b:a u are bigger "+"😻");}
		// Scanner s = new Scanner(System.in);
		// int price=s.nextInt();
		// System.out.println(price);
// System.out.println(y*1.20); //percentage formula
//Harmonic seires ==> 1/1+1/2+1/3+1/4.......1/n
// double ct=0;
// for (int i=1;i<5;i++ ) {
//     ct+=1.0/i;
// }
// System.out.println(ct);

//loops-
// for(int i=5;i>1;i--){

//     for(int j=5;j>=i;j--){
//        System.out.print(" ");System.out.print("* ");
//     }

//     System.out.println();
// }

//monte carlo methods are used for computing hard problems using random class

// Random rand=new Random();
// int num=rand.nextInt(23);
// System.out.println(num);

// //generating random number of [a,y] range
// int numb=rand.nextInt(y-a+1)+a;
// System.out.println(numb);

// int size=5;
// for(int i=1;i<=size;i++){
//     for(int j=size;j>=i;j--){
//     System.out.print(" ");
//     }
//     for(int j=1;j<=i;j++){
//         System.out.print("* ");
//     }System.out.println();
// }
// for(int i=1;i<=size;i++){
//     for(int j=1;j<=i;j++){
//     System.out.print(" ");
//     }
//     for(int j=size;j>=i;j--){
//         System.out.print("* ");
//     }System.out.println();
// }

// int [] arr=new int[5];
// System.out.println(arr[1]);

//design
		int xx = 100; int n = 0;
		// System.out.println(xx*1.20);
		// String name=s.nextLine();
// System.out.println("name:"+name);
		// while(){n++;
		//     int[] arr=new int[n];
//         List<Integer> l=new ArrayList<Integer>();
// l.add(2);
// l.add(3);
// for(int x:l)System.out.println(x);
//     // }
// int []arr=new int[5];
// System.out.print(arr.length);
// int ct=0;
// Map<Integer, Integer> map=new HashMap<Integer, Integer>(365);
// for(int i=0; i<map.length; i++)
//     {map.put(i,list.get(i)+1);
// if(map.get(i)==2){ct++;continue;}
// }

//default return type of functions is int
		class Account {
			private String name;
//private-because we want these variables to only get accessed by object only.
			private int number;
			private double balance;
//constructors-
// *same name as class name
// *not have a return and generally public
			public Account(String name, int number) {
				this.name = name;
				this.number = number;

			}
			public Account(String name, int number, double balance) {
//ordering of this function matters as we want to create constructor's above first
//otherwise it will overlaps each other's function.
				this(name, number); //here it goes to above constructor for assigning
				this.balance = balance;

			}
//toString is a default method for returning object fields as string
//it is automatically called when we use print statement
//by default it returns test_number$className@hex value of its memory location
			public String toString() {return this.name + " " + this.number + " " + this.balance;}

			public boolean equals(Object obj) {
//we have to make account type object of obj which is a default object type
				if (obj instanceof Account) {
					Account other = ((Account)obj);
//instanceof checks if object belongs to same class
					return name == other.name && number == other.number && balance == other.balance;
//we can directly fields of objects because they is the mehod of this class
//even though fields are private
				} else return false;
			}
			public void makeCopyOf(Account og) {
				this.setName(og.name);
				this.setNumber(og.number);
				this.setBalance(og.balance);
			}

//account methods
			public void deposit(double amount) {
				balance += amount;
			}
			public void withdraw(double amount) {
				if (balance > amount)balance -= amount;
				else System.out.println("Aukaat se pare na jaaye vro");
			}
			public void displayBalance() {
				System.out.println(balance);
			}
			public void setName(String nm) {name = nm;}
			public String getName() {return this.name;}
			public void setNumber(int num) {number = num;}
			public int getNumber() {return this.number;}
			public void setBalance(double amm) {balance = amm;}
			public double getBalance() {return this.balance;}

		}
		Account account1 = new Account("girish", 23, 10000);
		Account account2 = new Account("girish", 23, 12000);
// account1.setName("girish");
// System.out.println(account1.getName());
// account1.setNumber(23);
// account1.setBalance(10000);
// account1.deposit(2000);
// account1.withdraw(13000);
// account1.displayBalance();
// 		System.out.println(account1);
//  		System.out.println(account2);
//     for (char c = 'a'; c <= 'z'; c++) {
//     alphabet[c - 'a'] = c;
// }
// 		System.out.println(account1.equals(account2));
// 	  String nat="natsu";
// 	  System.out.println(nat instanceof String);
//arrays of objects
		//null accounts
		// Account[] customers = new Account[3];
		// for(int i=0;i<customers.length;i++){System.out.println(customers[i]);}
		//accounts with values
		// Account[] customers={new Account("madara",12,23445),new Account("mohini",22,28734)};
		// System.out.println(customers[0]);
		// System.out.println(customers[1]);
		/* INPUT */
		/***************************

		3

		***************************/

		/* OUTPUT */
		/***************************

		((()))
		(()())
		(())()
		()(())
		()()()

		***************************/

//TIP=dont copy of object when passed as parameter for changes

		// obj=obj2 //makes both objects pointing to same object
		// Account account3=new Account("ram",21);
		// account3.makeCopyOf(account1);
		// System.out.println(account3);

//We use static keyword for not making copy of a field and method in objects.
// STATIC KEYWORD EXAMPLE and abstract class usage
// class Game extends hisoka{
// 	private static int count=0;
//   private int counter;
// public Game(){this.counter+=(++(this.count));}
// public void getCounter(){System.out.println(this.counter);}
// public void hisoka2(){System.out.println("hisoka is op");}
// }
// Game game1=new Game();
// Game game2=new Game();
// Game game3=new Game();
// game1.hisoka2();
// game2.getCounter();
// game3.getCounter();

//final keyword is used to create constants

//Generics<T>
//usage is giving cap. reusing by defining differents fields and methods of generic's type
//Limitations-
		// static objects cannot be instantiated with it
// class Gentest<Num>{
// 	private Num number;
// 	private Num opnumber;
// 	public void setNumber(Num number){this.number=number;}
// 	public Num getNumber(){return this.number;}
// public void setopNumber(Num number){this.opnumber=number;}
// 	public Num getopNumber(){return this.opnumber;}
// }
// Gentest<Integer> gen=new Gentest<>();
// Gentest<String> gen2=new Gentest<>();
// gen.setNumber(23);
// gen.setopNumber(69);
// gen2.setNumber("23");
// gen2.setopNumber("Girish");
// System.out.println(gen.getNumber()+" is of type:"+gen.getNumber().getClass().getName());
// System.out.println(gen.getopNumber()+" is of type:"+gen.getopNumber().getClass().getName());
// System.out.println(gen2.getNumber()+" is of type:"+gen2.getNumber().getClass().getName());
// System.out.println(gen2.getopNumber()+" is of type:"+gen2.getopNumber().getClass().getName());


//Inheritence-
//it is not allowed with private methods and fields
// 		class ABSpike{
// 			private char color;
// 			private boolean captured;
// 			private int life;
// 			private int[] position = {0, 0};

// 			public ABSpike(char team, int[] initialPosition) {
// 				this.color =team;
// 				position[0]=initialPosition[0];
// 				position[1]=initialPosition[1];
// 				life=10;

// 			}
// 			public void setColor(char color) {
// 				this.color = color;
// 			}

// 			public void capture() {captured = true;}

// 			protected void setLife(int change) {
// 				this.life += change;
// 			}

// 			private void setPosition(int x, int y) {
// 				position[0] = x;
// 				position[1] = y;
// 			}

// 			public char getColor() {return color;}
// 			public boolean isCaptured() {return captured;}
// 			public int getX() {return position[0];}
// 			public int getY() {return position[1];}
// 			public boolean move(int x, int y) {
// 				if (life > 0) {
// 				setLife(-1);
// 				setPosition(x,y);
// 				return true;
// 				} else {return false;}
// 			}

// public int getLife(){return this.life;}

// 		}
// class Ghoul extends ABSpike{
// 	public Ghoul(char team,int[] position) {
// 		super(team,position);
// 		setLife(5);
// 	}
// 	public boolean move(int x,int y) {
// 		if(Math.abs(getX()-x)==1 && Math.abs(getY()-y)==1){
// 					return super.move(x,y);}
// 	return false;}
// }
// int[] position={2,2};
// int[] position1={1,1};
// ABSpike object1=new ABSpike('B',position);
// Ghoul object2=new Ghoul('R',position1);
// System.out.println(object2.move(position[0],position[1]));
// // object2.setLife(-10);
// System.out.println(object2.getLife());

//Polymorphism is saying if b extends a then b has powers of a+ its own
// means a's powers can be used via a or b
// it is implemented via java compiler and jvm
// calling of appropriate method by them at runtime is called dynamic dispatch.
// dynamic dispatching is also known as virtual method invocation
// subclass can override any superclass until method is private,static or final

//interfaces are definitions of functions which can be implemented
// class Errand implements Item{
// 	private String location;
// 	private int duration;
// 	private Date deadline;
// 	private Date scheduleDay;
// 	public Errand(String location, int duration, Date deadline){
// 		this.location=location;
// 		this.duration=duration;
// 		this.deadline=deadline;
// 	}
// public boolean schedule(Date day){
// if (day.before(this.deadline) ){
// 	scheduleDay=day;
// 	return (true);
// }
// else return (false);
// }
// public void completed(){
// if(scheduleDay.before(deadline))System.out.println("completed");
// else{System.out.println("not completed");}
// }
// public String toString(){return location+" "+duration+" "+deadline+" "+scheduleDay;}
// }

// class Engagement implements Item{
// private String whom;
// private String location;
// private Date day;

// public Engagement(String whom, String location){
// 	this.whom=whom;
// 	this.location=location;
// }
// public boolean schedule(Date day){
// if (day!=null){
// return (true);
// }
// else return (false);
// }
// public String sendRSVP(String whom,Date day){
// 	if(schedule(day)){
// 	this.day=day;
// 		completed();
// 		return whom+" are invited to conference ICML at "+location;
// 	}else{return null;}

// }
// public void completed(){
// 	if(sendRSVP(this.whom,this.day)!=null)System.out.println("Mission accomplished!");

// }
// }
// // summy(2,9);
// Calendar c = Calendar.getInstance();

//         c.set(Calendar.MONTH, 11);

//         c.set(Calendar.DATE, 05);

//         c.set(Calendar.YEAR, 1996);

//         Date d1 = c.getTime();

// Date d2=new Date();
// Errand errand1=new Errand("Delhi",10,d2);
// errand1.schedule(d1);
// // System.out.println(errand1.toString());
// errand1.completed();
// System.out.println(d1.before(d2));

// Engagement eng1=new Engagement("girish sama","delhi");
// eng1.schedule(d2);
// System.out.println(endDay(errand1,d2));

//Assignment
// class Month{
// 	private int name;
// 	private int days;

// public Month(int name){
// setMonth(name);
// }

// public int getName(){
//  return this.name;
//  }

//  public int getDays(){
//  return this.days;
//  }

//  public void setMonth(int name){
//  this.name = name;
//  if (name == 9 || name == 4 || name == 6 || name == 11)
//  days = 30;
//  else if(name == 2)
//  days = 28;
//  else
//  days = 31;
//  }

//  public String toString(){
//  return(this.convertToString() + " has " + days + " days in it.");
//  }

//  private String convertToString(){
//  switch (name) {
//  case 1: return "January";
//  case 2: return "February";
//  case 3: return "March";
//  case 4: return "April";
//  case 5: return "May";
//  case 6: return "June";
//  case 7: return "July";
//  case 8: return "August";
//  case 9: return "September";
//  case 10: return "October";
//  case 11: return "November";
//  case 12: return "December";
//  default: return "Invalid month";
//  }
//  }
//  }
// class SchoolMonth extends Month {
//  private boolean holidays; //are there any holidays in this month?
//  private char semester; //'F'all, 'S'pring, s'U'mmer

//  public SchoolMonth(int name){
//  super(name);
//  setSemester();
//  setHolidays();
//  }

//  public boolean containsHolidays(){
//  return holidays;
//  }

//  public void setSemester(){
//  if (getName() > 7) // Aug - Dec
//  semester = 'F';
//  else if(getName() > 4) // May - July
//  semester = 'U';
//  else
//  semester = 'S'; // Jan - April
//  }

//  public void setHolidays(){
//  if (getName() != 3 && getName() !=4 && getName() != 6 && getName() !=8)
//  holidays = true;
//  }

//  public String toString(){
//  return (super.toString() + " It is in the " + semester + "semester.");
//  }

// }

//Abstract Classes-may or may not include abstract methods
//Exception Handling

// int nn=s.nextInt();
// System.out.println(nn);
// Vector<Integer> v=new Vector<Integer>(nn);
// v.add(1);
// v.add(2);
// v.add(3);
// v.add(3);
// isnlastIndexofv(v,nn);

//try-catch arguments
	
try{
	Vector<Integer> v=new Vector<Integer>(1);
}catch(Throwable e){
	// System.out.println(e+" < "+0);
	e.printStackTrace();
}finally{
	System.out.println("Program Exited Successfully!");
}
//finally statement will run nevertheless 

//java utility class should be declared as final and have a private constructor
// System.out.println((int)Math.pow(10,2));

BufferedReader br;
        StringTokenizer st;
            br = new BufferedReader(new InputStreamReader(System.in));
try{String line=br.readLine();
StringBuilder g=new StringBuilder();
while(line!=null){
g.append(line).append("\n");
line=br.readLine();
}System.out.println(g.toString());
}
catch(IOException e){
	e.printStackTrace();
}
	}
}