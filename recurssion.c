#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int n,result;
clrscr();
printf("enter n");
scanf("%d",&n);
result=fact(n);
printf("\n factorial is %d",result);
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}
