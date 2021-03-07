#include<stdio.h>
#include<conio.h>
void main()
{
 int y=10;
 int *p=&y;
  y=*p+1;
  clrscr();
  printf("the value of variable y is %d",y);
  getch();
}
