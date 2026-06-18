/* name[50]="ramesh"
lower to upper
      name
      0 1 2 3 4 5 6 7 8 9 10 11 ...... 50
      r a m e s h \0 */
void main()
{
char name[50]="MANEESH *$% KUMAR";
int i;
clrscr();
printf("\t%s\n",name);

for(i=0;name[i]!='\0';i++)    // this is the main point
 if (name[i]>='A' && name[i]<='Z') //'A' ascii code 65 'a' code 97 diff=32
     name[i]=name[i]+32;
 //ascii-american standard code for information interchange
/* A - 65 to Z - 90	-> 65 -> 1000001 -> A
   a - 97 to z - 122
       32		 */
printf("\n\t%s",name);
getch();
}