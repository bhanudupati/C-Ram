#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char buffer[255];
  clrscr();
  fp=fopen("abc.txt","r");
  fscan(fp,"%s",buffer);
  printf("%s",buffer);
  fgets(buffer,255,(FILE*)fp);
  printf("%s",buffer);
  fclose(fp);
  getch();
}





