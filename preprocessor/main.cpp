#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "hv preprocessor substitutions.h"

#define escape(s) xescape(s)
#define xescape(s) #s

int main()
{
#define PAIR(i,j) "(" escape(i) "," escape(j) ")"
#define H_SUBSTITUTION_STRING(i,j) PAIR(i,j) ", "
#define V_SUBSTITUTION_STRING(n) cout << SUBSTITUTE_HORIZONTALLY(2)(n) PAIR(2,n) << endl;
	SUBSTITUTE_VERTICALLY(10)

	system("PAUSE");
	return 0;
} // end function main
