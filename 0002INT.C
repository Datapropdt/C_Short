/*
Variables, Datatypes & Format Specifiers:

Variable: A variable is a placeholder, which holds a value
	  in a memory location accessed by its address.

syntax:
	variable_name =  value;

ex:
	  a   	=  3000;


Datatype: A datatype tells the compiler, that the type of input given user.
syntax:
	datatype variable_name =  value;

ex:
	int a = 123;

These are 2 types:
	1. Primary Datatypes
	2. User Defined Datatypes

1. Primary Datatypes:
	1. Integer
	2. Character
	3. Floating Point
	4. Double Floating Point
	5. Valueless

1.integer:

keyword 		: int
size 			: 2 bytes
range   		: -32768 to +32767
format specifier        : %d

 */ /*

#include<stdio.h>		  // preprocessors
#include<conio.h>
void main()			   // function declaration
{
int z; 				 // variable declaration
clrscr();
printf("\nEnter your Roll No:");  // statements
scanf("%d",&z);
printf("Roll No: %d",z);	     //comments
getch();
}

/*
2. character:
keyword 		: char
size 			: 1 byte
range   		: -128 to +127	(0 to 255)
format specifier        : %c
						*//*

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("\n Enter your Name:");
scanf("%c",&a);
printf("\n Name: %c",a);
getch();
}
					*//*
String:
keyword 		: char
size 			: user defined
range   		: user defined
format specifier        : %s

syntax:
	datatype var_name[size] = "value";
ex:
	char   a[10] = "Hello";			      *//*

#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
clrscr();
printf("\n Enter your Name:");
scanf("%s",&a);
printf("\n Name: %s",a);
getch();
}
	*/	/*

floating point:

keyword 		: float
size 			: 4 byte(s)
range   		: 1.3e-38 to 2.4e+38 (6digits)
format specifier        : %f

 *//*

#include<stdio.h>
#include<conio.h>
void main()
{
float z;
clrscr();
printf("\nEnter your Number: ");
scanf("%f",&z);
printf("\n Number:%f",z);
getch();
}
*/ /*

Double floating point:

keyword 		: double
size 			: 8 byte(s)
range   		: 1.3e-128 to 2.4e+128 (14 digits)
format specifier        : %lf or %0.14lf

  *//*

#include<stdio.h>
#include<conio.h>
void main()
{
double a;
clrscr();
printf("\nEnter your Number:");
scanf("%lf",&a);
printf("\n Number: %0.14lf",a);
getch();
}
*/


