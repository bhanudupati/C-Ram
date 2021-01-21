#include<stdio.h>
#include<conio.h>
void main()
{
int a=80;
clrscr();
if (marks>=80 && marks<=100)
printf("Excellent");
else if (marks>=60 && marks<=80)
printf("Good");
else if (marks>=30 && marks<=60)
printf("Average");
else if (marks>=0 && marks<=30)
printf("Failed");
else
printf("Invalid");
getch();
}
