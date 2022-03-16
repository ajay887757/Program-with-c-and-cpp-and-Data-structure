//WAP to scan and print Structure Variable
#include<stdio.h>
#include<conio.h>
struct student
{
  int   sno,m;
  char sname[20];
  float per;
};
void main()
{
  struct student s1,s2;
  clrscr();
  printf("enter sno,m,sname of s1");
  scanf("%d%d%s",&s1.sno,&s1.m,s1.sname);
  s1.per=s1.m/3.0;
  printf("enter sno,m,sname of s2");
  scanf("%d%d%s",&s2.sno,&s2.m,s2.sname);
  s2.per=s2.m/3.0;
  printf("\n  %d  %d   %s   %f", s2.sno , s2.m , s2.sname , s2.per );
  printf("\n  %d  %d   %s   %f" , s1.sno , s1.m , s1.sname , s1.per );
  getch();
 }