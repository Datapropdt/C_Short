/* pattern
i   j
1   1
2   2 2
3   3 3 3
4   4 4 4 4
5   5 5 5 5 5
*/
main()
{
int i,j;

clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
	printf("%2d",i);

printf("\n");
}
getch();
}

/*
i = 1 ; i <= 5 -> 6<=5 f
	j = 1 ; j <= i -> 1 <= 2 T // 2 <= 2 T // 3<=2 f
	j ->
i	1	2	3	4	5
1	1	f
2	2	2	f
3	3	3	3	f
4	4	4	4	4	f
5	5	5	5	5	5	f
f

*/
