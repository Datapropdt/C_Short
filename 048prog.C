 /* sorting an array which is bubble sorting
i j  a[j] a[j+1]    array
0 0   12 >  2      2 12 15 3 8
  1   12 > 15      2 12 15 3 8
  2   15 >  3      2 12 3 15 8
  3   15 >  8      2 12 3 8 15

1 0   2 > 12
  1  12 > 3      2 3 12 8 15
*/

/*
2 12 15 3 8
2 12 3 15 8
2 12 3 8 15
2 3 12 8 15
2 3 8 12 15
*/

main()
{
int a[5]={12,2,15,3,8}; //initializing an  array  //2 3 8 12 15
//	   0 1 2  3 4
int i,j,t;
clrscr();
for(i=0; i<4; i++)
{
 for(j=0;j<4;j++)
     if (a[j] > a[j+1])  // ascending order, for descending keep <
	{
	t = a[j];	       //t(12) = a[0](12) =12
	a[j]= a[j+1];		// a[0](2) = a[1](2) =2
	a[j+1]=t;		//a[1](12) = t(12)
	}               	// 2,12,15,3,8
}				// 0 1  2  3 4 // 2,12,3,15,8 //2,3,8,12,15
printf("\n the sorted array is ");
for(i=0;i<5;i++) printf("%3d",a[i]);
getch();
}



