#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
	* Bad example, 
	* 1. only allocate space, can't initialize strings in the array
	* 2. string will allocate memory by themself, when free, it will not
	   call the destructor, so memory leaks
	*/
	//string* stringArray1 = static_cast<string*>( malloc(10*sizeof(string) );

	/*
	* Good example,
	* allocate space and initialize all objects using the constructor
	* when delete[], it will call destructor and free all memory it allocates
	*/
	string *stringArray2 = new string[10];
	delete[] stringArray2;
	return 0;
}
