#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[30]="Bhavana";
char name2[30]="Bhavana123";
clrscr();
if(strcmp(name1,name2)==0)
printf("name1 and name2 are equal");
else
printf("name1 and name2 are different");
getch();
}
