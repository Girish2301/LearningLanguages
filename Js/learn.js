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

// Iterating Object values
// let marks={"girish":23,"manish":21,"hisoka":20};

// for(let i=0;i<Object.keys(marks).length;i++){
//     console.log(marks[Object.keys(marks)[i]]);
// }

    /* OUTPUT */
/***************************

23
21
20

***************************/

//Strings-'',"" to store text
// let x="Girish";
// console.log(x); //Girish

//Template literals-we can use '',"" within `` string
// let a="Girish",b="coder";
// console.log(`${a} "is" 'a' ${b}`);
//Output-Girish "is" 'a' coder

// Escape sequence characters-use \ before every character
// console.log('Author\'s name is Girish ');
//Output-Author's name is Girish

//String Methods-
// let x="Hello\' World" 
// console.log(x.length); //12 bcoz escape char not counted

// let a="girish";
// console.log(a.toUpperCase()); //GIRISH
// console.log(a.slice(1,3)); //ir
// a=a.replace("girish","harish");
// console.log(a); //harish
// console.log(a.concat(" kumar")); //girish kumar
// console.log(`name ${a.includes('ir')?'has ir':' has not ir'} in ${a}`);
//Output-name has ir in girish

// let money="please extract Rs 5000"
// let amount=Number.parseInt(money.slice("please extract Rs ".length))
// console.log(amount); //5000

// let b="hisoka";
// b[2]='r'; //doesn't work as string is immutable
// console.log(b);

//Arrays-collection of different variables with different dtypes

// let a=[12,'girish',false,52.2];
// a[4]='hisoka';
// console.log(a); //[ 12, 'girish', false, 52.2, 'hisoka' ]

// let a=[1,2,3];
// console.log(a.toString()); //1,2,3
// console.log(a.join('-')); //1-2-3 makes str

// console.log(`Popped element: ${a.pop()} and updated arr:${a}`);
//Output-Popped element: 3 and updated arr:1,2

// console.log(`Pushed element: ${a.push(4)} and updated arr:${a}`);
//Output-Pushed element: 4 and updated arr:1,2,3,4

// console.log(`Shifted element: ${a.shift()} and updated arr:${a}`);
//Output-Shifted element: 1 and updated arr:2,3

// console.log(`UnShifted element: ${a.unshift(0)} and updated arr:${a}`);
//Output-UnShifted element: 4 and updated arr:0,1,2,3

// console.log(a.concat([4,5],[6,7])); 
//Output-[1, 2, 3, 4,5, 6, 7]

// console.log(a.sort()); //mofifies original array and sorts alphabetically
//Output- [ 1, 2, 3 ]

// console.log(a.reverse()); //[ 3, 2, 1 ]

// a.splice(1,1,10,11,12) //deletes and replace from pos and count and returns deleted values
// console.log(a); //[ 1, 10, 11, 12, 3 ]

//Loops and arrays-
// let a=[23,63,74,98];

// for(let i=0;i<a.length;i++){
//     console.log(a[i]);
// }

// for(let x in a){
//     console.log(a[x]);
// }

// a.forEach((x)=>{
//     console.log(x);
// });

// for(let x of a){
//     console.log(x);
// }
    /* OUTPUT */
/***************************

23
63
74
98

***************************/

// let z={'hi':12,'bye':23};
// let b=Array.from(Object.keys(z)); //makes array from any other object 
// console.log(b); // [ 'hi', 'bye' ]

//Map-creates a new array based on fn
// let b=[12,53,62,24];
// let c=b.map((val,i,b)=>{return val*val;});
// console.log(c); //[ 144, 2809, 3844, 576 ]

//Filter-
// let a=[1,2,3,4,5,6];
// console.log(a.filter((val,i,array)=>{
//     return val>3;
// })); // [ 4, 5, 6 ]

//Reduce-runs fn on x parameters and returns single value
// let a=[1,2,3,4];
// console.log(a.reduce((x,y)=>{return x*y;})); //24

//Guess Number Game-

// let chances=100;
// let answer=Math.floor(Number.parseInt(Math.random()*100)); //0-99
// let won=false;
// while(chances){
//     let choice=prompt("Enter Value:");
//     if(answer==Number.parseInt(choice)){
//         console.log("!!!Correct Guess!!! You Won with "+chances+" score");
//         won=true;
//         break;
//     }
//     else{
//         console.log("Incorrect Guess :( Retry Again");
//     }
//     chances--;
// }
// if(!won)console.log("OOPS! Ran Out Of Luck");

//Console Object-
// console.assert(5>6);
// console.assert(55>6); //checks condition and returns error if failed else undefined
// console.clear(); //clears console
// let obj={'a':1,'b':2,'c':3};
// console.table(obj);

    /* OUTPUT */
/***************************

┌─────────┬────────┐
│ (index) │ Values │
├─────────┼────────┤
│ a       │ 1      │
│ b       │ 2      │
│ c       │ 3      │
└─────────┴────────┘

***************************/

// console.time("a"); //starts timer
// console.warn('Don\'t use bankai'); //creates warning
// console.error('Bankaiiiiiiiii'); //creates error
// console.info('Bleach is good anime'); //creates info
// console.timeEnd("a"); //ends timer and returns difference //a: 0.320068359375 ms

//Confirm-default dialog box to get true on ok false on cancel
// let a=confirm("Do you want to Print Hello");
// console.log(a?"Hello World":"Nothing"); //Output-Hello World

//Window-global object every feature comes under it
// DOM- whole html page is made a js object(document)
// BOM- host environment additional objects are provided from it

//Redirect to google if num==4 
// let num=prompt("Enter Number")
// num=Number.parseInt(num);
// num==4?location.href="https://www.google.com":console.log("Nothing Happened"); //works fine

//Change background color on user prompt
// let colour=prompt("Enter Color:")
// document.body.style.background=colour;

//Snake,Water and Gun Game-
// let options=['S','W','G']
// while(true){
//     let choice=prompt("Enter S for Snake,W for water,G for Gun");
//     let pc_choice=Number.parseInt(Math.random().toFixed(0))+Number.parseInt(Math.random().toFixed(0));
//     pc_choice=options[pc_choice];
//     switch(choice){
//         case 'S':
//             if(pc_choice=='W'){
//                 console.log("You Win By Drinking Water");
//             }else if(pc_choice=='S'){
//                 console.log("You Tied in fighting with snake");
//             }else{
//                 console.log("You Lose bcoz Your snake shot by gun");
//             }break;
//         case 'W':
//             if(pc_choice=='W'){
//                 console.log("You Tied by merging with another water");
//             }else if(pc_choice=='S'){
//                 console.log("You Lose bcoz snake drank you");
//             }else{
//                 console.log("You Win by dissolving Gun");
//             }break;
//         case 'G':
//             if(pc_choice=='W'){
//                 console.log("You Lose bcoz you went under the water");
//             }else if(pc_choice=='S'){
//                 console.log("You Win by shooting snake");
//             }else{
//                 console.log("You Tied by shooting at other shooter");
//             }break;
//         default:
//             console.log("Invalid Choice! Check Rules");
//     };
//     let retry=confirm("Do You Want To Play Again");
//     if(!retry)break;
// }

// DOM Types of nodes-Text,Elements,Comment Nodes

// DOM Tree-html(document.documentElement)->head(document.head)/body(document.body)
// scripts in head tag don't have access to body tag elements
//'\n' character considered as text node in html

// console.log(document.firstChild); //Girish of p tag
// console.log(document.lastChild); //Kumar of p tag
// console.log(document.hasChildNodes()); //true
// console.log(document.childNodes); //returns Nodeslist which can be converted to array

//DOM COllections- read only,updates in realtime,iterable using loops
// $0-recent Element,$1-previous accessed Element

// console.log(document.head.parentNode); //gives parent node html
// console.log(document.head.parentElement); //gives parent element if there is element
// console.log(document.body.firstElementChild); //gives first element Girish
// console.log(document.body.children); //gives all chlld elements

// DOM Search Functions- document.getElementById(),document.getElementsByClassName(),document.getElementsByTagName(),document.getElementsByName()
//By CSS Selectors- document.querySelectorAll(),document.querySelector()
// document.body.matches(); // gives css selector exist or not
// document.body.closest(); // gives closest css selector to given css selector
// document.body.contains(); // gives element contains given css selector or not

// console.dir(document.getElementsByTagName('p')[0]); //show objects with its properties

//tag name- only takes element nodes

//innerHTML-gives inner content of element node
// console.log(document.getElementById('my_span').innerHTML);
//Output-Hum Span hai

//outerHTML-gives whole content including element of node as string
// console.log(document.getElementById('my_span').outerHTML);
//Output-<span id="my_span">Hum Span hai</span>

// console.log(document.body.textContent); //gives text content of all elements inside it 

    /* OUTPUT */
/***************************

Girish
Hum Span hai
Kumar

***************************/

//hidden property of element to hide/show it.

// let element=document.getElementById("first");

// console.log(element.getAttribute("id")); //get any attribute of elements //Output-first

// console.log(element.hasAttribute("class")); //true

// console.log(element.setAttribute("hidden",false)); //sets hidden attribute to false

//removeAttribute-removes attribute from element

// console.log(element.attributes); //returns NamedNodeMap

// Custom attributes- data-AttributeName should be always used in html
// accessed in js using dataset
// console.log(element.dataset.code); // hisoka
// console.log(element.dataset.mode); // hardcore

//Inserting HTML using js-

// let new_element=document.createElement('div');
// new_element.innerHTML='<p>HI I am generated using js<p>';
// // document.body.appendChild(new_element); // appends at end
// document.body.prepend(new_element); //makes first child
//element.before and element.after adds before/after element 
//element.replaceWith() replaces itself with given element

//other insertions-innerAdjacentHTML/Text/Element -beforebegin,beforeend,afterbegin,afterend
//element.remove() //removes HTML element

// let element=document.getElementsByTagName('p')[0];
// element.className='hi bye kyu bataye';
// console.log(element.getAttribute('class')); //hi bye kyu bataye
// element.classList.add('bhaisahab'); //adds in class tag
// console.log(element.getAttribute('class')); //hi bye kyu bataye bhaisahab
// element.classList.toggle('red'); // adds if not exist else removes

//SetTimeOut- executes after given time
// setTimeout(()=>{
//     console.log('Hello');
// },2000); // prints hello after 2 seconds

// let sum=(a,b)=>console.log(`Sum: ${a+b}`);
// setTimeout(sum,2000,3,2); // 3 and 2 are params of fn and delay of 2000 ms
//Output-Sum: 5

//ClearTimeOut-
// let sum=(a,b)=>console.log(`Sum: ${a+b}`);
// let a=setTimeout(sum,30000,3,2); //returns timer id
// let b=prompt("Do you want to clear?");
// if(b)clearTimeout(a); //cancels execution

//SetInterval-runs fn infinitely after time delay
// let sum=(a,b)=>console.log(`Sum: ${a+b}`);
// let c=setInterval(sum,2000,3,2);
// clearInterval(c); //cancels setInterval

// Browser Events-

// Mouse Events-click,context menu(right click),mouse move,mouse over/out,mouse up/down
// Keyboard Events-keyup and keydown
// Form element Events-submit,focus,etc
// Document Events- DOMContentLoaded

// let button=document.getElementById('b');
// button.onclick=()=>{ //issue- this overwrites html onclick handler code.
//     console.log('I am clicked');};

//Event Listeners-can assign multiple handlers with same fn
// let my_event=(e)=>{console.log('I am Clicked')};
// button.addEventListener('click',my_event); //adds event listener
// button.removeEventListener('click',my_event); //removes event listener

// Open google.com in new tab with button
// let button=document.getElementById('b');
// button.addEventListener('click',(e)=>{window.open("https://www.google.com",'',"width=500 height=500 resizable=yes");});

//Fetch website data after every 5 seconds-

// let fetchContent=async (url)=>{
//     data=await fetch(url);
//     return await data.json();
// };
// setInterval(async ()=>{
//     console.log(await fetchContent('https://jsonplaceholder.typicode.com/todos/1'))}
//     ,2000);

//Synchronous/Sequential Programming-
// let name=prompt("Enter Name");
// let age=prompt("Enter Age");
// console.log(`My name is ${name} with age:${age}`); //It ran in sequential manner
//Output-My name is Girish with age:20

//Asynchronous Programming-
// console.log('Started');
// setTimeout(()=>console.log('Set TimeOut 1 is Running'),2000); //It ran after 2 seconds and next code executed first resulting in aysnc fashion output
// console.log('Ended');

    /* OUTPUT */
/***************************

Started
Ended
Set TimeOut 1 is Running

***************************/

//Callbacks-passing fn as param in fns events

// Inversion of control-gives full access of fn to another function
// Callback Hell/Pyramid of Doom- callbacks calling infinite callbacks within self

// function printkrdo(message,src){
//     console.log(`${message} on ${src} file`);
// }

// function loadscript(url,callback){
//     let script=document.createElement('script');
//     script.src=url;
//     script.onload=()=>callback("EveryThing Works Fine",url);
//     script.onerror=()=>callback(new Error("Some Error Occured"),url);
//     document.body.appendChild(script);
// }

// loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js",printkrdo);

/* OUTPUT */
/***************************
 
EveryThing Works Fine on https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js file

***************************/

// loadscript("kucbhi.js",printkrdo);

    /* OUTPUT */
/***************************
 
 GET http://127.0.0.1:5500/kucbhi.js net::ERR_ABORTED 404 (Not Found)
 Error: Some Error Occured on kucbhi.js file

***************************/

//Promise- used for parallel execution
// Solution of callback hell 

// let vaada=new Promise((resolve,reject)=>{
//     console.log('Promise done');
//     resolve(69);
// }); //Output-Promise done

//Using then and catch-

// let p=new Promise((resolve,reject)=>{
//     console.log('Promise Pending');
//     setTimeout(()=>{
//         console.log('Finished Execution');
//         resolve(true);
//     },5000)} );


    /* OUTPUT */
/***************************
 
Promise Pending
Finished Execution

***************************/

// OR-
// then- used to create resolve values and perform operation thereafter
// Syntax-then((value),(error))

// let p2=new Promise((resolve,reject)=>{
//     console.log('Promise Pending');
//     setTimeout(()=>{
//         resolve(true);
//     },5000)} ).then((value)=>{
//         console.log(`Finished Execution with value:${value}`);
// });

    /* OUTPUT */
/***************************
 
Promise Pending
Finished Execution with value:true

***************************/

//catch- used to handle rejected promises

// let p=new Promise((resolve,reject)=>{
//     console.log('Promise Pending');
//     setTimeout(()=>{
//         reject(new Error("Some Error Occured"));
//     },5000)} ).catch((value)=>{
//         console.log(`Finished Execution with value:${value}`);
// });

    /* OUTPUT */
/***************************
 
Promise Pending
Finished Execution with value:Error: Some Error Occured

***************************/

// Promise Chaining-Every then() returns a new promise and every promise has to wait for parent promise to be executd

// let p=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         console.log('First Promise Running');
//         resolve();
//     },2000);
// }).then((value)=>{
//     let p2=new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Second Promise Running');
//             resolve();
//         },2000);
//     });
//     return p2;
// }).then((value)=>{
//     return new Promise((resolve,reject)=>{
//         console.log('Finished Execution');
//         resolve();
//     })
// })

    /* OUTPUT */
/***************************
 
First Promise Running
Second Promise Running
Finished Execution

***************************/

//Loadscript() via promise-

// function loadscript(url){
//     return new Promise((resolve,reject)=>{
//         let script=document.createElement('script');
//         script.type='text/javascript'
//         script.src=url;
//         document.body.appendChild(script);
//         script.onload=()=>resolve(5);
//         script.onerror=()=>reject(10);
//     }).then((value)=>{
//         console.log(`Script Loaded with resolve value: ${value}`);
//     }).catch((error)=>{
//         console.log(`Some Error Occured with reject value: ${error}`);
//     })
// }
// loadscript('hisoka.js') //Output-Some Error Occured with reject value: 10

// we can add multiple handlers which are independent(no waiting for another)-

// let p=new Promise((resolve,reject)=>{
//     console.log('First Promise Done');
//     resolve(1);
// });

// p.then((value)=>{
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Second Promise Done');
//         },3000)
//     })
// });

// p.then((value)=>{
//     console.log('Third Promise Done');
// })

    /* OUTPUT */
/***************************
 
First Promise Done
Third Promise Done 
Second Promise Done //after 3 seconds

***************************/

// Promise API- collection of 6 static methods of Promise class

//Promise.all()-returns array of resolved values when all promises are fulfilled doesn't work if any promise rejected

// let p1=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         console.log('First Promise');
//         resolve('Promise 1 Done');
//     },1000)
// })

// let p2=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         console.log('Second Promise');
//         resolve('Promise 2 Done');
//     },2000)
// })

// let p3=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         console.log('Third Promise');
//         resolve('Promise 3 Done');
//     },3000)
// });

// let promise_all=Promise.all([p1,p2,p3]);
// promise_all.then((value)=>{
//     console.log(value);
// })

    /* OUTPUT */
/***************************
 
First Promise
Second Promise
Third Promise
(3) ['Promise 1 Done', 'Promise 2 Done', 'Promise 3 Done']

***************************/

//Promise.allSettled()-returns array of status and values 
//Promise.race()- returns first fulfilled promise whether resolved/rejected
//Promise.any()- returns first fulfilled promise(ignores rejected) and AggregateError if all promises rejected
//Promise.resolve()- returns a resolved promise with given value
//Promise.reject()- returns a rejected promise with given value

// async- ensures fn returns a promise
// await- waits for promise to be fulfilled

// async function solve(){
//     let delhi=await new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Delhi weather: 35 Deg')
//             resolve('35 Deg')
//         },5000)
//     })
//     let mumbai=await new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Mumbai weather: 25 Deg')
//             resolve('25 Deg')
//         },3000)
//     })
//     return [delhi,mumbai];
// }
// function doing(){
//     console.log('Doing Something');
// }
// let a=solve();
// let b=doing();

// a.then((x)=>console.log(x));

    /* OUTPUT */
/***************************
 
Doing Something
Delhi weather: 35 Deg
Mumbai weather: 25 Deg
(2) ['35 Deg', '25 Deg']

***************************/

//Error Handling-try and catch works only in scheduled code,if async fns are there will have to handle seperately

// try{
//     console.log(hisoka);
// }
// catch(error){
//     console.log(error);
// }

    /* OUTPUT */
/***************************
 
ReferenceError: hisoka is not defined
    at learn.js:989:17
// catch code will run definitely

***************************/

//Error Object-main properties are name,message and stack

// try{
//     console.log(beerus);
// }
// catch(error){
//     console.log(error.name);
//     console.log(error.message);
//     console.log(error.stack);
// }

    /* OUTPUT */
/***************************

ReferenceError
learn.js:1011 beerus is not defined
learn.js:1012 ReferenceError: beerus is not defined
    at learn.js:1007:17

***************************/

// finally-runs nevertheless error occured or not

// try{
//     console.log(baki);
// }
// catch(error){
//     console.log(error);
// }
// finally{
//     console.log('Baki is supreme');
// }

    /* OUTPUT */
/***************************

ReferenceError: baki is not defined
    at learn.js:1027:17
Baki is supreme
    
***************************/

// Promise.all() and mutliple await-it awaits all promises synchronously reducing time 


// let p1=async ()=>{
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('First Promise');
//             resolve('Promise 1 Done');
//         },1000)
//     })
// }

// let p2=async ()=>{
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Second Promise');
//             resolve('Promise 2 Done');
//         },2000)
//     })
// }

// let p3=async ()=>{
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log('Third Promise');
//             resolve('Promise 3 Done');
//         },3000)
//     })
// }

// const run=async()=>{
//     console.time("run");
//     let a=await p1();
//     let b=await p2();
//     let c=await p3();
//     console.timeEnd("run");
// }

// run();

    /* OUTPUT */
/***************************
 
First Promise
Second Promise
Third Promise
run: 6159.56201171875 ms

***************************/

// Using await Promise.all()-schedule all promises at same time and wait till last promise is performed

// const run=async ()=>{
//     console.time("run");
//     let a=p1();
//     let b=p2();
//     let c=p3();
//     let result=await Promise.all([a,b,c]);
//     console.log(result);
//     console.timeEnd("run");
// }
// run();

/* OUTPUT */
/***************************

First Promise
Second Promise
Third Promise
(3) ['Promise 1 Done', 'Promise 2 Done', 'Promise 3 Done']
run: 3006.962890625 ms

***************************/

//Fetch API-

































