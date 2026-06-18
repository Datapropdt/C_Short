/* pattern */
main()
{
int i,j,sp;
clrscr();
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++)
printf("  ");
for(j=1;j<=i;j++)
	printf("  * ");
 printf("\n");
}
printf("\t  *");
printf("\n\t  *");
printf("\n\t  *");
printf("\n\t  *");
getch();
}