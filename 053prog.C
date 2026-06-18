/* program to swap or inter change two variable values with using
third variable.
	t = a	=  0  -> 10 = 10
	a = b	=  10 -> 20 = 20
	b = t   =  20 -> 10 = 10
*/
main()
{
int a=10,b=20;
int t;
clrscr();
printf("\n values of a,b before swapping a= %d  b = %d",a,b);

t = a;
a = b;
b = t;

printf("\n values of a,b after swapping a= %d  b = %d",a,b);
getch();
}