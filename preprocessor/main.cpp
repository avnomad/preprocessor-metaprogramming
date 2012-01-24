#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::clog;
using std::left;

#define cat(A,B,C) A ## B ## C
#define xcat(A,B,C) cat(A,B,C)

#define str(A) #A
#define xstr(A) str(A)



int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};

	cout<< sizeof(a) << endl;
#define TIMES 5
#define COUNT 0
	COUNT
#line COUNT
#undef COUNT
#define COUNT __LINE__



	COUNT
#line COUNT
#undef COUNT
#define COUNT __LINE__

	COUNT
#line COUNT
#undef COUNT
#define COUNT __LINE__

#include "print.h"

	cout<<a[TIMES]<<endl;
	system("PAUSE");
	return 0;
} // end function main