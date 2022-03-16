//Array of Structure
#include<stdio.h>
#include<conio.h>
struct student
{
  int sno,m;
  char sname[20];
  float per;
};
void main()
{
  struct student s[10];
  clrscr();
  printf("\n %d  %d",sizeof(s),sizeof(s[10]) );
  for(int i=0;i<10;i++)
  {
	 printf("\n Enter sno,sname and m");
	 scanf("%d%s%d", &s[i].sno, s[i].sname,&s[i].m);
	 s[i].per=s[i].m/3.0;
  }
  for(i=0;i<10;i++)
	 printf("\n %d %s %d  %f",s[i].sno, s[i].sname,s[i].m ,s[i].per);
  getch();
}
