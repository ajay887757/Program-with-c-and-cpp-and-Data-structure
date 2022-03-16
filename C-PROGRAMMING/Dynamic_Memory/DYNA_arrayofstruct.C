//WAP to Create Dynamic Array of Structure
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
  int n,i;
  struct student *p;
  printf("enter no of records");
  scanf("%d",&n);
  p=(struct student *)malloc(n*sizeof(struct student));
  for(i=0;i<n;i++)
  {
	 printf("enter sno,m,sname of %d students",i+1);
	 scanf("%d%d%s",&(p+i)->sno,&(p+i)->m,(p+i)->sname);
	 (p+i)->per=(p+i)->m/3.0;
  }
  printf("Entered Records Are:\n");
  for(i=0;i<n;i++)
	 printf("\n %d,%d,%s,%f",(p+i)->sno,(p+i)->m,(p+i)->sname,(p+i)->per);
  free(p);
  getch();
}