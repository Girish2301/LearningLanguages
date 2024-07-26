//Programming- instructions to tell computer to what to do.

//Ecmascript- Js standard to make different documents recognize that they are using same language

//Ways to execute Js- browser console,node runtime,html script tag,replit

//Variables- to store values with different datatypes

//Dynamic typed language-variables can change type on runtime

// let a=53;
// console.log(a);
// a="girish";
// console.log(a);

//Js is case-sensitive and don't create variables from reserved keywords

    /* OUTPUT */
/***************************

53
girish

***************************/

// var-globally scoped,redeclaration,default is undefined
// let-local scoped,no redeclaration and redefinition
//const-local scoped,no redeclearation and no redefinition

// let b=23;
// let b="girish"; //throws error bcoz of reclaration

// Primitive Datatypes-null,number,bool,bigint,String,Symbol,Undefined

// let a=null;
// let b=234;
// let c=false;
// let d=BigInt("23553");
// let e="Girish";
// let f=Symbol("I am Symbol");
// let g=undefined;

// console.log(typeof d); //bigint //to know type of variable


//Object is Non-Primitive DataType and acts as key-value pair

// const item={"Girish":23,"hisoka":"hi"};
// console.log(item);

    /* OUTPUT */
/***************************

{Girish: 23, hisoka: 'hi'}

***************************/

//Practice-

//Q1-Concatenation
// let a="Girish";
// let b=5;
// console.log(a+b);
//Output-Girish5

//Q2-Find Type
// let x="Girish";
// console.log(typeof x);
//Output-string

//Q3-Changing value in const object
// const obj={'HI':undefined};
// obj['HI']=23;
// console.log(obj['HI']);
//Output-23

//Q5-dictionary of 5 words
// const dict={'hi':1,'bye':2,'cry':3,'shy':4,'my':5};
// console.log(dict.bye); 
//Output-2

// Expressions-are reserved keywords and literals which act as program itself
// console.log(!true); //true is exp
// 7;// 7 itself as program/expression

//Operators-
//Arithmetic Operators-+,-*,/,++,--,**,%
// let a=5,b=2;
// console.log(a+b);
// console.log(a-b);
// console.log(a/b);
// console.log(a*b);
// console.log(a**b); //power
// console.log(a%b); //remainder
// console.log(++a);

    /* OUTPUT */
/***************************

7
3
2.5
10
25
1
6

***************************/

//Assignment Operators-=,+=,-=,/=,*=,**=
// let a=5,b=2;
// console.log(a+=b);
// console.log(a-=b);
// console.log(a/=b);
// console.log(a*=b);
// console.log(a**=b);
// console.log(a%=b); //a is updated everytime bcoz it performs and then assigns

    /* OUTPUT */
/***************************

7
5
2.5
5
25
1

***************************/

//Comparison Operators-==,!=,>,<,>=,<=,?:
// let a=5,b=2;
// console.log(a==b);
// console.log(a!=b);
// console.log(a>b);
// console.log(a<b);
// console.log(a>=b);
// console.log(a<=b);
// console.log(a==5?a:b);
// console.log(a==="5"); //check also its type which == doesn't consider
// console.log(a!=="5");

    /* OUTPUT */
/***************************

false
true
true
false
true
false
5
false
true

***************************/

// Logical Operators-&&,||,!
// console.log(true && true); //both conditions should be true for true
// console.log(true && false);
// console.log(true || true); //any condition should be true for true
// console.log(true || false);
// console.log(!false);

    /* OUTPUT */
/***************************

true
false
true
true
true

***************************/

// Conditional Expressions-
// if-runs whenever true
// else if-if runs fails then comes here 
// else- runs whenever else if and if fails

// let a=5;
// if(a==5)console.log('a is 5');
// else if(a==6)console.log('a is 6')
// else console.log('a!=5 and a!=6');

    /* OUTPUT */
/***************************

a is 5

***************************/

// Prompt()-Shows a window to take input and input type is always string
// let x=prompt("Enter x: ")
// Alert()-shows message in dialog box
// alert("Value of x: "+x)

    /* OUTPUT */
/***************************

value entered 234
Value of x: 234

***************************/

//Swtich case-

// let a=5;

// switch(a){
//     case 1:
//         console.log('1');
//     case 2:
//         console.log('2');
//     case 5:
//         console.log('5');
//     default:
//         console.log('i will run if not broken above');
// }

    /* OUTPUT */
/***************************

5
i will run if not broken above

***************************/

//Practice-    
        
//Q1-Find age b/w 10 and 20 or not

// let a=prompt('Enter Age');
// a=Number.parseInt(a);
// console.log(a>=10 && a<=20?a:'Invalid');
//Output-15

//Q2-Divisible by 2 and 3
// let a=prompt('Enter Value')
// a=Number.parseInt(a)
// console.log(!(a%2) && !(a%3)?a:'Not by 2 and 3')
//Output- 6

//Q3-Drive or No Drive based on age<18
// let age=21;
// console.log(age<18?'No Drive':'Drive');
//Output-Drive

//Loops-

// for loop-runs for x no. of times
// for(let i=0;i<5;i++)console.log(i);

    /* OUTPUT */
/***************************

0
1
2
3
4

***************************/

// for in loop- iterates over keys/index similiar to for loop
// let a=[1,2,3,5];
// for(let x in a)console.log(Number.parseInt(a[x]));

    /* OUTPUT */
/***************************

1
2
3
5

***************************/

// for of loop- iterates over object/iterables
// let a=[2,5,3,4];
// for( let x of a)console.log(x);

    /* OUTPUT */
/***************************

2
5
3
4

***************************/

//while loop- runs till condition is true
// let a=1;
// while(a<5)console.log(a++);

    /* OUTPUT */
/***************************

1
2
3
4

***************************/

// do while loop- it runs once nonetheless then checks condition everytime
// let a=1;
// do{
//     console.log(a++);
// }while(a<=5);

    /* OUTPUT */
/***************************

1
2
3
4
5

***************************/

//Functions-resuable code to run programs on different values

// function avg(a,b){
//     console.log((a+b)/2);
// }

// avg(5,2);
// avg(3,6);

    /* OUTPUT */
/***************************

3.5
4.5

***************************/












