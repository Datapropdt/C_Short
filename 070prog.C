/* function 2nd type function without arguments with return statements*/
float aot() /* function definition or called programs */
{
float b,h,area;
printf("enter base value of triangle  :   ");scanf("%f",&b);
printf("enter height value of triangle  :   ");scanf("%f",&h);
area = b * h /2;
return area; /* return statement or return values */
}
float si() /* function definition */
{
float p,t,r,si;
printf("\nenter p ");scanf("%f",&p);
printf("\nenter t ");scanf("%f",&t);
printf("\nenter r ");scanf("%f",&r);
si = p*t*r/100;
return si;
}
main() /* calling program */
{
float a;
clrscr();
printf("\n area of triangle = %f",aot()); /* calling the funtion or using the function */
a = si(); /* function calling */
printf("\n simple interest = %f",a);
getch();
}
