/* arrays first program
program to read values into an array and print them	*/

main()
{
int a[5];  /* a[0],a[1],a[2],a[3],a[4], a[5] contains null \0 */
//index =0 -> n-1 -> 5 - 1 = 4 (last)

int i;
clrscr();
for(i=0;i<5;i++)
{
printf("\n enter a[%d] = ",i);
scanf("%d",&a[i]);
printf("\n a[%d] = %d",i,a[i]);
}
getch();
}