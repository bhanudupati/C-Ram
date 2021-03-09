#include<stdio.h>
#include<conio.h>
void main()
{
 int *p=(int*)malloc(sizeof(int));
 free(p);
 p=NULL;
 clrscr();
 printf("dangling pointer example"); 
 getch();
} 
