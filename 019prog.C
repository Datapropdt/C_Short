/*while(<condition>)
{
block of statements;
}
*/
void main()
{
long int i=0,n;
long int j=10000000;
clrscr();
printf("\n j = %ld",j);

printf("\n enter n: ");
scanf("%ld",&n);

while(i<n) 	   /* i++ is increment operator i++ = i+1  ++i preincrement
			i++ is post increment operator :}*/
{
printf("\n Number : %ld ",i); /* no need to use { } if
contains only one statement*/
i++;
}
getch();
}
