#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "hv preprocessor substitutions.h"

#define escape(s) xescape(s)
#define xescape(s) #s

int main()
{

#define H_SUBSTITUTION_STRING(i,j) "(" escape(i) "," escape(j) "), "
#define V_SUBSTITUTION_STRING(n) cout << SUBSTITUTE_HORIZONTALLY(3)(n) << endl;
	SUBSTITUTE_VERTICALLY(10)

	system("PAUSE");
	return 0;
} // end function main
