/*        loops/iterations/control structures
loop: A loop allows to repeat set of statements desired no of times based
      on a condition.loop continues as long as the condition is true.
      loop terminates when condition becomes false.
3 types:

1. while() { ..... } - is an entry condition checking loop or entry
		     controlled. no minimum times when condition false.
		     must not be terminated with ;
2. do { .... } while(); - is exit condition checking loop or exit controlled
		     loop runs min 1 time irrespective of condition.
		     must be terminated with ;
3. for( ) {... } - executes set of statements specified no of times.

Syntax of while:
init;
while(<condition>)
{
block of statements;
inc/dec;
}

Syntax of do...while:
init;
do{
block of statements;
inc/dec;
}while(condition);

Syntax of for:
for(init;condition;inc/dec)
{
block of statements;
}
program to print nos from 1 to a given number */
main()
{
long int i=1,n;    /* allows to give value for n > 32767 */
clrscr();
printf("\n enter n:");
scanf("%ld",&n);

while(i<=n)
{
printf("%ld \n",i);
i=i+1;
}
getch();
}