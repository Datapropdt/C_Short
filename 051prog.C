/* program for matrix addition */
main()
{
int a[2][2]={1,1,1,1},b[2][2]={{2,2},{2,2}};
int c[2][2];
int i,j;

clrscr();
puts("the matrix addition is \n");
for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
      { c[i][j]=a[i][j]+b[i][j];
	printf("%2d",c[i][j]);
      }
    printf("\n");
}
getch();
}




/*

A	0	1     	     +          B 	0	1
0       1	1               	0	2	2
1	1	1                       1	2	2


c	0	1
0	3	3
1	3	3


i = 0;  0<2 T
j = 0;	0<2 T
j = 1;  1<2 T
j=2; 2<2 f
i = 1; 1<2 T
j=0; 0<2 T
j=1; 1<2 T

c[0][0]	= a[0][0]+b[0][0];
  3	     1   +  2

c[0][1]	= a[0][1]+b[0][1];
  3	     1   +  2

c[1][0]	= a[1][0]+b[1][0];
  3	     1   +  2

c[1][1]	= a[1][1]+b[1][1];
  3	     1   +  2

  */


