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

	log("girish");

	std::cout<<mul(5,3)<<std::endl;

	//Header Files- used to include files with fn declarations to help linker
	
	//while ".h" used for relative path and <.h> within include directory.

}
#endif