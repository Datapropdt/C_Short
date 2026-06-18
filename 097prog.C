/* pointer to pointer or double pointer(**) is used to store the
address of a pointer variable */
main()
{
long int a;
long int *aa=&a;
long int **aaa = &aa; /* **aa is double pointer or pointer to pointer*/
clrscr();
puts("enter a ");
scanf("%ld",&a);
printf("\n a= %ld address = %x ",a);
printf("\n ptr= %ld address = %x ",*aa);
printf("\n dptr= %ld address = %x ",**aaa);

getch();
}



