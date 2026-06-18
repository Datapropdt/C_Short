/* fibonacci series */
main()
{
int n1=0,n2=1,n3,ln;
clrscr();
printf("\n enter last number ");
scanf("%d",&ln);
printf("%d, %d",n1,n2);
n3=n1+n2;
while(n3<ln)
{
n3=n1+n2;
printf(" ,%d",n3);
n1=n2;
n2=n3;
}
getch();
}
		    //  n3
//	0	1	1	2	3	5	8	13	21