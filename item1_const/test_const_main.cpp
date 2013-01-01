
#include "test_const.h"
#include <iostream> 

using namespace std;

int main() {
	apple a;	
	apple b;	
	std::cout<<"a: ";
	a.hi();
	cout<<"a's id :"<<a.id<<endl;
	cout<<"b: ";
	b.hi();
	cout<<"b's id :"<<b.id<<endl;

	/* the following two should be random numbers b/c
	 * "member" were not initialized, this is just to 
	 * test if the compiler allows "member[id]"
	 */
	cout<<"b's member[17] = :"<<b.member[17]<<endl;
	cout<<"b's member[12] = :"<<b.member[12]<<endl;

}



