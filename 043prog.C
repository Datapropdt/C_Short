/*    Arrays are used to store similar values identified by same name
and differed by index number.

 These are 3 types:
	1. One Dimensional Array
	2. Two Dimensional Arrays
	3. Multi Dimensional Arrays

 Syntax:
	datatype array_name[size];
 Ex:
	int a[10];		  */

void main()
{
int a[5];  /* a[0],a[1],a[2],a[3],a[4], a[5] contains null \0 */
clrscr();
printf("\n enter a[0] ");
scanf("%d",&a[0]);
printf("\n enter a[1] ");
scanf("%d",&a[1]);
printf("\n enter a[2] ");
scanf("%d",&a[2]);
printf("\n enter a[3] ");
scanf("%d",&a[3]);
printf("\n enter a[4] ");
scanf("%d",&a[4]);
printf("\n a[0] = %d",a[0]);
printf("\n a[1] = %d",a[1]);
printf("\n a[2] = %d",a[2]);
printf("\n a[3] = %d",a[3]);
printf("\n a[4] = %d",a[4]);
getch();
}

/*
	int a =  32767;	//#1df1
	int b =  32767; //#1d32
	int c =  32767; //#1d45
	int d =  32767; //#1db1

	a+b+c+d;

	arrays - homogenious elements (same)

	ar[5]; 	//#ff23
	index = 0  -> starting point
	       a [3][2][7][6][7] - 2bytes
	int    ar[7865][86][8652][951][781]
		    0    1   2     3    4      (last : n-1)

scanf("%d",&a);	-> 123 -> #2d12 -> a [123];
printf("%d",a);	 123    < -----------|

scanf("%d",&a[0]);	-> 7865 -> #ff3d -> a[0]=7865
scanf("%d",&a[1]);	-> 86   -> #ff3d -> a[1]=86
scanf("%d",&a[2]);	-> 865  -> #ff3d -> a[2]=8652	< 32767
scanf("%d",&a[3]);	-> 951  -> #ff3d -> a[3]=951
scanf("%d",&a[4]);	-> 781  -> #ff3d -> a[4]=781

printf("%d",a[0]);	->   7865
printf("%d",a[1]);      ->   86
printf("%d",a[2]);     ->    8652
printf("%d",a[3]);      ->   951
printf("%d",a[4]);      ->   781







  */