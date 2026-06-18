/* else if */
 main()
{
int per;
clrscr();
printf("\nenter percentage  ");
scanf("%d",&per);

if (per>=60.00)
  printf("result = first ");
else if (per>=50.0)
   printf("result = second ");
else if (per>=35.0)
   printf("result = third ");
else
   printf("result = fail ");

getch();
}

