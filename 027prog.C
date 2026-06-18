/* program to read a number and print its reverse number
ex: if no is 345 result 543 */
main()
{
int n,r;
clrscr();
puts("enter a number ");
scanf("%d",&n);
printf("the reverse number is ");

while(n!=0)	// 2468 ->  8642
{
r = n % 10;  /*	 0 % 10 = 8	 % is remainder operator  gives remainders */
printf("%d",r);		// 8642
n=n/10;   /* / is quotient operator give quotient */
}
getch();
}
/*
345 % 10  = 5   345/10 = 34      10)3(0
34 % 10   = 4    34/10 = 3          0
3 % 10    = 3     3/10 = 0          3 */