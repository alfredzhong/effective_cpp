/* item2, fucntions in iostream are type-safe and extensible,
 * while functions in stdio.h are not
 * So use iostream instead of stdio.h
 */


#include <iostream>

using namespace std;

class Rational {
	public:
		Rational(int numerator = 0, int denominator =1);
	private:
		int n,d; //numerator, denominator

	//I am a friend of a function that declared outside of the 
	//class, as long as I have the same prototype as the outside
	//function
	//The outside function will serve as the implementation of me
	//and can access private and protected members of mine

	//friend is like a door to the castle of a class
	//to use syntax cout<<r, this is a handy way
	//if overload << inside this class, it can only be 
	//<Rational Object><<( one parameter )
	//that is not what we want
	friend ostream& operator<<(ostream& s, const Rational& r);


};




/* Note: default argument can only given in declaration, 
 * but not in implementation, if implementation is seperated
 * from declaration
 */
Rational::Rational(int numerator , int denominator  ) {
	n = numerator;
	d = denominator;
}


/* ostream type object is like "a object of a file"
 * cout is the file of stdout, << is like "written_by"
 * so cout<<str is like count.written_by(str), this function
 * returns an reference to cout itself, so cout<<str1<<str2 is 
 * like 
 * cout << str1 //followed by
 * cout << str2
 *
 * similarly, >> is like write to
 * cin>>i is cin.write_to(i), notice that i is passed by reference
 */

ostream& operator<<(ostream& s, const Rational& r) {
	s << r.n << '/' << r.d;
	return s;
}



int main() {
	Rational r(3,5);
	cout<<r<<endl;

	Rational r2;
	cout<<r2<<endl;

	return 0;
}

