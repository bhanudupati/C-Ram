#include<stdio.h>
#include<conio.h>
void main()
{
 int *p;
 int n,i;
 n=5;
 clrscr();
 p=(int*)malloc(n*sizeof(int));
 if (p==NULL)
 {
  printf("memory not allocated \n");
  exit(0);
 }
 else
 {
  printf("memory is allocated");
 }
 for(i=0;i<n;i++)
 {
  p[i]=i+1;
 }
 for(i=0;i<n;i++)
 {
  printf("%d",p[i]);
 }
 getch();
} 
