/* program to swap or inter change two variable values without
using third variable.
	a = a+b =10 + 20 = 30
	b = a-b =30 - 20 = 10;
	a = a-b =30 - 10 = 20
*/
main()
{
int a,b;
clrscr();
puts("enter a,b values : ");
scanf("%d%d",&a,&b);
printf("\n values of a,b before swapping a= %d  b = %d",a,b);

a = a + b;         //using third variable	//33 + 52 = 85
b = a - b;
a = a - b;

printf("\n values of a,b after swapping a= %d  b = %d",a,b);
getch();
}