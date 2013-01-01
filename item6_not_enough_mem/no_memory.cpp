
/* 
No Enough Memory handler
when new returns an exception
*/


#include <iostream>
#include <stdlib.h>
#include <stdint.h>

const uint64_t kilo = 1024;
const uint64_t mega = 1024*kilo;
const uint64_t giga = 1024*mega;
const uint64_t tera = 1024*giga;
const uint64_t pita = 1024*tera;

using namespace std;


//handler function has to be no return and no input
void noMemory() {
	cerr<<"Not Enough Memory"<<endl;
	abort();
}


int main() {
	//set new handler
	set_new_handler(noMemory);
	int *pBigArray = new int[tera];
	delete [] pBigArray;
	return 0;
}

