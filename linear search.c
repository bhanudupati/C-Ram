#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[100],key,n,flag=0;
clrscr();
printf("enter number of elements");
scanf("%d",&n);
printf("\n enter array elements");
for(i=0,i<n;i++)
scanf("%d",&key);
for(i=0,i<n;i++)
{
if(key==a[i])
{
flag=1;
break;
}
}
if(flag==1)
printf("key value is found at %d index",i);
else
printf("key value is not found");
getch();
}
