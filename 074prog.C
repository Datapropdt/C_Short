/* 2. funciton without arguments with return statements or values*/
big()
{
int a,b;
printf("\n enter a,b ");scanf("%d%d",&a,&b);
if (a>b)
    return a;     /*it is the return statements */
else
    return b;
}
main()
{
int c,d;
clrscr();
printf("\n biggest = %d",big());   /* returning big to printf() */
c=big(); /* returning biggest to a variable */
d=big();
printf("\n big of C= %d\t big of D= %d ",c,d);
printf("\n sum of two big numbers = %d",(big()+big()));
/* returning to an expression */
getch();
}