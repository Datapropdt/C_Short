/* program to implement call by reference */
swap(int *a,int *b)
{
int t;         	// a = #ab45(20)  b = #cd78(40)    t = #ff99(0)
t = *a;		// t (20)#ab45 = a (20)#ab45
*a = *b;	// a (40)#cd78 = b(40)#cd78
*b = t;         // b (20)#ab45 = t (20)#ab45
}
main()
{
int p=20,q=40;
clrscr();
printf("\n values before swapping \n");
printf("\n p = %d q = %d",p,q);
swap(&p,&q); /* passing addresses to a function */
printf("\n values after swapping \n");
printf("\n p = %d q = %d",p,q);
getch();
}

