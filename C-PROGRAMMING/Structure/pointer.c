//Pointer to Structure
#include<stdio.h>
#include<conio.h>
struct student
{
  int   sno,m;
  char sname[20];
  float per;
};
void main
{
  struct student s1 , *p;
  clrscr();
  p = &s1;
  printf("\n enter sno,m,sname of student");
  scanf("%d%s%d",&p->sno,p->sname,&p->m);
  p->per=p->m/3.0;
  printf("\n %d %d %s %f",p->sno,p->m,p->sname,p->per );
  getch();
}