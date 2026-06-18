/*
				Operators
Operators: An Operator is a special symbol use to perform
		operations on operands.
These are 6 types:
* Arthimetic operator
* Assignment operator
* Bitwise operator
* Conditional  operator
* Logical  operator
* Relational  operator

Arthimetic operator: These are use to perform math operations on operands.

Operator	      Description
   +		    	plus
   -		      	minus
   * 			multiply
   /			divide
   %			modular division
   ++                   increament
   --                   decreament

   *//*
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,z;
clrscr();
printf("\nEnter Values for A & B :");
scanf("%d%d",&a,&b);
z = a  +  b;
printf("\n Sum :%d",z);
z = a  -  b;
printf("\n Difference :%d",z);
z = a  *  b;
printf("\n Product :%d",z);
z = a  /  b;
printf("\n Quotient :%d",z);
z = a  %  b;
printf("\n Reminder :%d",z);
getch();
}

*//*

Increament & Decreament
Increament: These are use to increament the value by 1.
	These are 2 Types
		1. Pre-Increament
		2. Post-Increament

1. Pre-Increament: These are use to increase the value first and then it
		   stores the value in the memory location.

	Syntax:
		++var_name;
	eg:
		++i;

2. Post-Increament: These are use to store the value first and then it
		    increases the value in the memory location.
	Syntax:
		var_name++;
	eg:
		i++;

Decreament: These are use to decreament the value by 1.
	These are 2 Types
		1. Pre-Decreament
		2. Post-Decreament

1. Pre-Decreament: These are use to decrease the value first and then it
		   stores the value in the memory location.

	Syntax:
		--var_name;
	eg:
		--i;

2. Post-Decreament: These are use to store the value first and then it
		    decreases the value in the memory location.
	Syntax:
		var_name--;
	eg:
		i--;
						       */
#include<stdio.h>
#include<conio.h>
void main()
{
int a=9,b=9,c=11,d=11;
clrscr();
++a;
printf("\n A:%d",a);
b++;
printf("\n B:%d",b);
--c;
printf("\n C:%d",c);
d--;
printf("\n D:%d",d);
getch();
}
     /*
Assignment Operators:	These are use assign right operand value to the
			left operand.

operator	description
=  		equals to
+=              plus assignment
-=              minus assignment
*=		multiply assignment
/=		divide assignment
%=		mod division assignment				*//*

#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,c;
clrscr();
c = a;
printf(" C:%d",c);
c += a;
printf("\n C:%d",c);
c -= a;
printf("\n C:%d",c);
c *= a;
printf("\n C:%d",c);
c /= a;
printf("\n C:%d",c);
c %= a;
printf("\n C:%d",c);
getch();
}

*//*
Bitwise Operators: These are use perform opeartions on bits/binary values.

Operator	Description
&(ampersand)	Bitwise AND
|(pipe)		Bitwise	OR
^(caret)	Bitwise XOR
~(tilde)	1's Compliment
<<		Left Shift
>>		Right Shift
---------------------------------------------------
Table of conversion:
0	1	2	3	4	5	6	7
1       2       4	8	16	32	64	128

8       9  	10
256     512     1024

--------------------------------------------
truth table:
a	b	a&b	a|b	a^b	~a
0	0	0	 0	0	 1
0	1       0        1	1
1	0       0        1      1	 0
1	1	1        1	0

a       ~a
0	1
1       0

		128 	64	32	16	8	4	2	1
a    =
b    =
a&b  =
a|b  =
a^b  =
~a   =
a<<2 =
a>>2 =
-------------------------------------------------------------------
*//*
#include<stdio.h>
#include<conio.h>
void main()
{
int a=  ,b= ,c;
clrscr();
c = a&b;
printf("\nBitwise AND: %d",c);
c = a|b;
printf("\nBitwise OR: %d",c);
c = a^b;
printf("\nBitwise XOR: %d",c);
c = ~a;
printf("\nBitwise 1's Compliment: %d",c);
c = a<<2;
printf("\nBitwise Left Shift: %d",c);
c = a>>2;
printf("\nBitwise Right Shift: %d",c);
getch();
}
							*//*
 Conditional Operators:
 Operator	Description
 ?		qn mark/conditional oper
 :		colon

 syntax:
	( cond ) ? true statement : false statement ;
							*//*

void main()
{
int a =10, b = 20;
clrscr();
(a<=b)? printf("A is lesser than B") : printf("B is lesser than A");
getch();
}
							*//*
//sizeof operator:
void main()
{
int a;
float b;
char c;
double d;
clrscr();
printf("\n Size of Int : %d bytes",sizeof(a));
printf("\n Size of Float : %d bytes",sizeof(b));
printf("\n Size of Char : %d byte",sizeof(c));
printf("\n Size of Double : %d bytes",sizeof(d));
getch();
}
							*//*
Logical Operator: These are use to perform basic logical gate operations
		  on operands.

Operator        Description
  &&		Logical AND
  ||		Logical OR
  !		Logical NOT

Truth table:
	a	b 	a&&b 	a||b 	 !a  	!(a&&b)	      !(a||b)
	0       0        0	 0       1         1		 1
	0	1        0       1                 1             0
	1	0        0       1       0         1             0
	1	1        1       1                 0             0

	1 = true
	0 = false

	a    !a
	0    1
	1    0
						  *//*
void main()
{
int a=1,b =0;
clrscr();
printf("\n AND : %d",a&&b);
printf("\n OR : %d",a||b);
printf("\n NOT : %d",!a);
printf("\n NOT AND : %d",!(a&&b));
printf("\n NOT OR : %d",!(a||b));
getch();
}

						*//*

Relational Operator: These are use to find relation between two operands.

Operator	Description
==		equals to
!=              not equals to
<               less than
>               greater than
<=		less than equals to
>= 		greater than equals to

						*//*
void main()
{
int a,b;
clrscr();
printf("\nEnter values for A & B:");
scanf("%d%d",&a,&b);
(a<=b)? printf("\n A is lesser than equals B") :
printf("\nB is lesser than equals A");
(a==b)? printf("\nA is equals B") : printf("\nA is not equals to B");
(a>b)? printf("\nA is greater than B") : printf("\nB is greater than A");
getch();
}
						*/
