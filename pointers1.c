#include<stdio.h>
#include<conio.h>
void main()
{
  int a=20;
  int*p;
  p=&a;
  clrscr();
  printf("the value of p variable is %d",*p);
  getch();
}
