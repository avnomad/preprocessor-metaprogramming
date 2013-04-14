//	Copyright (C) 2009, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of Preprecessor Metaprogramming.
 *
 *	Preprecessor Metaprogramming is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Preprecessor Metaprogramming is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Preprecessor Metaprogramming.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef HV_PREPROCESSOR_SUBSTITUTIONS_H
#define HV_PREPROCESSOR_SUBSTITUTIONS_H

// macro to concatenate 2 token sequences.
// need 1 pair for horizontal and 1 pair for vertical.
#define CONCAT_H(A,B) CONCAT_H_HELPER(A,B)
#define CONCAT_H_HELPER(A,B) A##B
#define CONCAT_V(A,B) CONCAT_V_HELPER(A,B)
#define CONCAT_V_HELPER(A,B) A##B

// vertical substitution macros
#define MAX_VERTICAL_SUBSTITUTIONS 10

#define SUBSTITUTE_VERTICALLY_0(argument)
#define SUBSTITUTE_VERTICALLY_1(argument) V_SUBSTITUTION_STRING(0,argument)
#define SUBSTITUTE_VERTICALLY_2(argument) SUBSTITUTE_VERTICALLY_1(argument) V_SUBSTITUTION_STRING(1,argument)
#define SUBSTITUTE_VERTICALLY_3(argument) SUBSTITUTE_VERTICALLY_2(argument) V_SUBSTITUTION_STRING(2,argument)
#define SUBSTITUTE_VERTICALLY_4(argument) SUBSTITUTE_VERTICALLY_3(argument) V_SUBSTITUTION_STRING(3,argument)
#define SUBSTITUTE_VERTICALLY_5(argument) SUBSTITUTE_VERTICALLY_4(argument) V_SUBSTITUTION_STRING(4,argument)
#define SUBSTITUTE_VERTICALLY_6(argument) SUBSTITUTE_VERTICALLY_5(argument) V_SUBSTITUTION_STRING(5,argument)
#define SUBSTITUTE_VERTICALLY_7(argument) SUBSTITUTE_VERTICALLY_6(argument) V_SUBSTITUTION_STRING(6,argument)
#define SUBSTITUTE_VERTICALLY_8(argument) SUBSTITUTE_VERTICALLY_7(argument) V_SUBSTITUTION_STRING(7,argument)
#define SUBSTITUTE_VERTICALLY_9(argument) SUBSTITUTE_VERTICALLY_8(argument) V_SUBSTITUTION_STRING(8,argument)
#define SUBSTITUTE_VERTICALLY_10(argument) SUBSTITUTE_VERTICALLY_9(argument) V_SUBSTITUTION_STRING(9,argument)

#define SUBSTITUTE_VERTICALLY(n) CONCAT_V(SUBSTITUTE_VERTICALLY_,n)

// horizontal substitution macros
#define MAX_HORIZONTAL_SUBSTITUTIONS 10

#define SUBSTITUTE_HORIZONTALLY_0(horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_1(horizontal,argument) H_SUBSTITUTION_STRING(0,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_2(horizontal,argument) SUBSTITUTE_HORIZONTALLY_1(horizontal,argument) H_SUBSTITUTION_STRING(1,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_3(horizontal,argument) SUBSTITUTE_HORIZONTALLY_2(horizontal,argument) H_SUBSTITUTION_STRING(2,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_4(horizontal,argument) SUBSTITUTE_HORIZONTALLY_3(horizontal,argument) H_SUBSTITUTION_STRING(3,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_5(horizontal,argument) SUBSTITUTE_HORIZONTALLY_4(horizontal,argument) H_SUBSTITUTION_STRING(4,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_6(horizontal,argument) SUBSTITUTE_HORIZONTALLY_5(horizontal,argument) H_SUBSTITUTION_STRING(5,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_7(horizontal,argument) SUBSTITUTE_HORIZONTALLY_6(horizontal,argument) H_SUBSTITUTION_STRING(6,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_8(horizontal,argument) SUBSTITUTE_HORIZONTALLY_7(horizontal,argument) H_SUBSTITUTION_STRING(7,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_9(horizontal,argument) SUBSTITUTE_HORIZONTALLY_8(horizontal,argument) H_SUBSTITUTION_STRING(8,horizontal,argument)
#define SUBSTITUTE_HORIZONTALLY_10(horizontal,argument) SUBSTITUTE_HORIZONTALLY_9(horizontal,argument) H_SUBSTITUTION_STRING(9,horizontal,argument)

#define SUBSTITUTE_HORIZONTALLY(n) CONCAT_H(SUBSTITUTE_HORIZONTALLY_,n)


#endif // HV_PREPROCESSOR_SUBSTITUTIONS_H
