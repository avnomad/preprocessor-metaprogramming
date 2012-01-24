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


int g(int f())
{
	return f();
}

#define H_SUBSTITUTION_STRING(i,j,arg) ,arg concat(a,i)
#define V_SUBSTITUTION_STRING(j,IGNORE) int g(int f(int a SUBSTITUTE_HORIZONTALLY(j)(j,int)), int a SUBSTITUTE_HORIZONTALLY(j)(j,int)) \
{ \
	return f(a SUBSTITUTE_HORIZONTALLY(j)(j,)); \
}

SUBSTITUTE_VERTICALLY(10)(/**/)


int f0()
{
	return 0;
}
int f1(int a1)
{
	return a1;
}
int f2(int a1,int a2)
{
	return a2;
}
int f3(int a1,int a2,int a3)
{
	return a3;
}

int main()
{
	cout << g(f0) << endl;
	cout << g(f1,1) << endl;
	cout << g(f2,1,2) << endl;
	cout << g(f3,1,2,3) << endl;

	system("PAUSE");
	return 0;
} // end function main
