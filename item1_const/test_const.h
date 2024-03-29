


/*
* at least g++ allows declare a const variable once
* in the header and included in multiple
* cpp source file without "multiple declaration error" 
*/

const int foo = 17; //NOT an error


/* 
* None const variable declaration in header and included
* by multiple cpp source file will cause "multiple declaration
* error"
*/
// int bar = 18;   This is an error

//constent inside the scope of a class

class apple {
	public:
		static const int id = 100;
		void hi();
		int member[id];

		// emum hack, in case the compiler doesn't
		// accept "number[id]" b/c it treat "id" as
		// a variable 
		/*
		emum {id=5};
		int member[id];
		*/
};



/* reference return type trick */
template <class T>
inline T& imax(T& a, T& b) {
	return a>b?a:b;
}

/* to replace macro with parameters */
// #define imax(a,b) ( (a)>(b)?a:b )








