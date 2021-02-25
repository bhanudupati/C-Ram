#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
  int rollno;
  int age;
  char name[30];
  char college[30];
};
void main()
{
struct student s1;
  s1.rollno=3;
  s1.age=17;
  strcpy(s1.name,"bhavana");
  strcpy(s1.college,"cmr");
  clrscr();
  printf("%d",s1.rollno);
  printf("%d",s1.age);  
  printf("%d",s1.name); 
  printf("%d",s1.college);  
  getch();
}
