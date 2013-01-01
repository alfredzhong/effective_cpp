
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

	/* inline function instead of macro with parameter 
	   example
	*/
	cout<<endl<<endl;
	int c = 10, d = 18;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	++imax<int>(c,d);
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;



	float e = 1.2, f=1.7;
	cout<<"e = "<<e<<endl;
	cout<<"f = "<<f<<endl;
	//imax<float>(e,f) ++;
	imax<float>(e,f) ++;
	cout<<"e = "<<e<<endl;
	cout<<"f = "<<f<<endl;

}



