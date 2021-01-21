#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3;
clrscr();
printf("Enter the value for num1");
scanf("%d",&num1);
printf("Enter the value for num2");
scanf("%d",&num2);
printf("Enter the value for num3");
scanf("%d",&num3);
if (num1>num2 && num1>num3)
printf("num1 is the greatest");
else if (num2>num1 && num2>num3)
printf("num2 is the greatest");
else
printf("num3 is the greatest");
getch();
}
