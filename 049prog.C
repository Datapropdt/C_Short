/* 2 dimentional array or matrix reading and printing */
main()
{
int a[3][2];  /* declaration of 2 dimensional array */
int i,j;
clrscr();
for(i=0;i<3;i++)
   for(j=0;j<2;j++)
     {
     printf("\n enter a number: ");
     scanf("%d",&a[i][j]);
     }

printf("\n the matrix is \n");

for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++)
   {
      printf("%4d",a[i][j]);
   }
   printf("\n");
   }
getch();
}
/*
 i = 0; i< 3
	0 < 3 t
		j = 0 ; 0 < 2 t
		j = 1 ; 1 < 2 t
		j = 2 ; 2 < 2 f
 i=	1 < 3 t
		j = 0 ; 0 < 2 t
		j = 1 ; 1 < 2 t
		j = 2 ; 2 < 2 f
	2 < 3 t
		j = 0 ; 0 < 2 t
		j = 1 ; 1 < 2 t
		j = 2 ; 2 < 2 f
	3 < 3 f


	j ->
i	0	1
0       00	01
1	10	11
2	20	21

	98	76
	38	95
	66	39


  */