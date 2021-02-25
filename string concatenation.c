#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char firstname[30]="Bhavana";
char lastname[30]="Srinivas";
strcat(firstname,lastname);
  clrscr();
  printf("after concatenation %s",firstname);
  getch();
}
