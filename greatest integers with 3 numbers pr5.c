#include<stdio.h>
#include<conio.h>
void main()
{
int a=22;
int b=78;
int c=85;
clrscr();
if (a>b && a>c)
printf("a is the greatest");
else if (b>a && b>c)
printf("b is the greatest");
else
printf("c is the greatest");
getch();
}
