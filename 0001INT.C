Syllabus:
Introduction to C
Variables , Datatypes & format Specifiers
Operators
Conditional Statements
Loops
Arrays
Strings
Functions
Structures
Unions
Pointers
Files I/O

-----------------------------------------------------------

Introduction to C:
Dennis Ritchie, 1972 at AT & T(American Telephone & Telegraph) bell labs,
New Jersery, U.S.A.

Uses:
C is easy to learn
C is a Middle level language, because it handles both high level activities
& low level activities.
C initially called as B language and later it changed to C.
C is made to develop Operating System based on UNIX.
C is Structured Language follow POP (Procedure Oriented Programming).
C is case sensitive language.
C has 32 keywords.
C can be compiled on a variety of platforms.

How to Open C compiler:
Turbo C++.exe (enter)-> editor
New Document 	-> Alt + F + N

Eg:
void main()
{
printf("Hello ALL");
}
o/p:

To Save 			->  f2
To compile 			->  Alt + f9
To excute			->  ctrl + f9
User Screen/Output screen	->  alt + f5
full screen			->  f5
Quit 				->  alt + x
full screen Window		->  alt + enter

symbols:
() 	- parenthesis
[]	- brackets
{}	- braces
;	- semi colon
:	- colon
.	- dot operator
,	- separator
\	- back slash
/	- slash
'  '	- single quotes
" "	- double quotations
*	- asterisk
&	- ampersand
%	- percentile
|	- pipe
^	- caret
~	- tilde

C Structure:
	preprocessors
	function declaration
	variable declaration
	statements
	comments
-----------------------------------------------------
Headerfiles:
These are builtin preprocessors which use to call functions, parameters,
prototypes  & I/O routines.

Syntax:
	#include<headerfile.extension>

eg:
	#include<stdio.h>


Headerfile		Description
อออออออออออออุออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ
alloc.h      ณ Declares memory management functions (allocation,
	     ณ deallocation, etc.).
conio.h      ณ Declares various functions used in calling the DOS console
	     ณ I/O routines.
float.h      ณ Contains parameters for floating-point routines.
locale.h     ณ Declares functions that provide country- and language-
	     ณ specific information.
malloc.h     ณ Memory management functions and variables.
math.h       ณ Declares prototypes for the math functions.
stdio.h      ณ Defines types needed for the Standard I/O Package.
string.h     ณ Declares several string- and memory-manipulation routines.

-------------------------------------------------------

keywords: These are built-in words which have meaning.
We have 32 keywords:
auto		break	    	case		char
const		continue    	default		do
double		else	  	enum	    	extern
float		for	    	goto		if
int		long		register	return
short		signed	  	sizeof		static
struct		switch	    	typedef		union
unsigned	volatile	while		void


Escape Sequence: These are use to skip the sequence of lines.

\t	-	tab space
\n	-	new line
\b      -	backspace
\a      -	bell sound

-----------------------------------------