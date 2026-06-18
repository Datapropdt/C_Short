/*	Conditional Statement: These are use to check wheather the given
condtion is either "True" or "False".

1. Stacked if : when an if condition contains only true part it is stacked if

   Syntax : if (<condition>)
		< true statement>;

2. simple if : if an if condition contains one true and one false statement
	       it is simple if
   Syntax:
	     if (<condition>)
		< true statement>;
	     else
		< false statement>;
3. compound if: if an if condition contains more than one statement either
		true part or false part

   Syntax:   if (<condition>)
		{
		<true statement1>;
		<true statement2>;
		}
	     else
		{
		< false statement1>;
		< false statement2>;
		}

4. nested if: if an if condition contains further if's either in true part or
	      false part

	if (<condition>)
	{
		if (<condition>)
		< true statement>;
		else
		< false statement>;
	}
	else
	{
		if (<condition>)
		< true statement>;
		else
		< false statement>;
	}
5.  else if :
	   if an if condition contains only true parts if conditions and
	   finally false statement

	   if (<condition1>)
	      <true statement1>;
	   else if (<conidion2>)
	      <true statement2>;
	   else if (<condition3>)
	      <true statement3>;
	   else
	      <false statement>;

program to read your age and print eligible to vote if age>18
*/

main()
{
int age;

clrscr();

printf("\n enter your age : ");
scanf("%d",&age);

if (age>18)
   printf("\n eligible to vote ");

getch();
}
