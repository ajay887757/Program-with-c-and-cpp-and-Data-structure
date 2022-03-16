//WAP to Create Dynamic Structure
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct student
{
  int sno,m;
  char sname[20];
  float per;
};
void main()
{
  struct student *p;
  clrscr();
  p=(struct student *)malloc(sizeof(struct student));
  printf("enter sno,m,sname of s1");
  scanf("%d%d%s",&p->sno,&p->m,p->sname);
  p->per=p->m/3.0;
  printf("\n %d,%d,%s,%f",p->sno,p->m,p->sname,p->per);
  free(p);
  getch();
}