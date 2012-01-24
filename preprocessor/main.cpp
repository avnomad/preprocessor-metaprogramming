/* Copyright (c) 2009,2012 Vaptistis Anogeianakis */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::system;

#include "hv preprocessor substitutions.h"

#define escape(s) xescape(s)
#define xescape(s) #s

#define concat(A,B) xconcat(A,B)
#define xconcat(A,B) A##B


int main()
{
#define PAIR(i,j) "(" escape(i) "," escape(j) ")"
#define H_SUBSTITUTION_STRING(i,j,arg) PAIR(i,j) ", "
#define V_SUBSTITUTION_STRING(n,arg) cout << SUBSTITUTE_HORIZONTALLY(n)(n,arg) PAIR(n,n) << endl;
	SUBSTITUTE_VERTICALLY(10)(/**/)


		system("PAUSE");
	return 0;
} // end function main
