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
int main(){ //entry point
	// main function special case no need to return any value

	// Each Cpp file compiled into .obj and glued together in one exe file
	// using linker

	//.obj is binary file and .asm is assembly instruction file

	//constant folding-stores constant value ofconstant values's expression

	//static log() makes it file exclusive function.

	//inline- replaces function call with function body.

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
}
#endif