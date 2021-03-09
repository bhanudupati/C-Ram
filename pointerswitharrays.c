#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 int a[5]={1,2,3,4,5};
 int *p;
 p=a;
 printf("the values are ");
 for(i=0;i<5;i++)
 {
  printf("%x",*p);
  p++;
 }
  getch();
}
