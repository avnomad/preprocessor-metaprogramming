#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::clog;
using std::left;

#define cat(A,B) A##B
#define xcat(A,B) cat(A,B)

#define str(A) #A
#define xstr(A) str(A)

int main()
{

#define END 4
#define SUBSTITUTE(n) cout << n << endl;
#include "0.h"

	system("PAUSE");
	return 0;
} // end function main
