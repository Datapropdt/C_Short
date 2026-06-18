/*Functions is a sub program that can be tested and executed independently
functions are two types
1: built in functions
clrscr(),getch(),getchar(),puts() -
2: udf (user defined functions )

functions are of 5 types based on their working and usage
1. function without arguments without return statements : clrscr(), getch()
2. function without arguments with return statements: getche(),putche()
3. function with arguments without return statements :  printf()
4. function with arguments with return statements: gets(name), puts(),scanf()
   printf()
5. recursive function: a functin calls itself then it is recursive function
*/

h1()   /* function without arguments , it is fucntion definition
	 user defined function (udf)  or called program */
{
printf("\n hello world...1");
return 0;
}


main()     // calling program
{
clrscr();
printf("\n one");
h();   /* function calling or using */
printf("\n two ");
h1();
h();
getch();
return 0;
}

h()   /* function without arguments , it is function definition
	 user defined function (udf)  */
{
printf("\n Bye");
return 0;
}



 /*
main()
{
fnd(a,b);
//printf(c);

}

fnd(int a, int b)
{
int a=10,b=29;
printf(a+b);
//return a+b;
}



   */





