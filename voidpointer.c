#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10;
 char y='a';
 void *p=&x;
 p=&y;
 clrscr();
 printf("the value of variable p is %s",p);
 getch();
} 
