#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char greetings[30]="Welcome to C language";
  clrscr();
  printf("%s",strlwr(greetings));
  printf("%s",strupr(greetings));
  printf("%s",strrev(greetings));
  getch();
}
