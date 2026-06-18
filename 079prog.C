f1()
{
int x=10;
static int y=10; //static declaration will be considered only one time
x++;
y++;
printf("\n  x= %d  y= %d",x,y);
}

main()
{
clrscr();
f1();
f1();
f1();
f1();
getch();
}
