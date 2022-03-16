#include<stdio.h>
#include<conio.h>
void main()
{
  int ch,m1,m2,m3;
   float per;
  clrscr();
  printf("\nEnter marks of 3 sub");
  scanf("%d%d%d",&m1,&m2,&m3);
  per=((m1+m2+m3)*100)/3;
  ch=per/10;
 switch(  ch  )
{
case 9:
case 10: printf(" GRADE   A");
               break;
case 7:
case 8: printf(" GRADE   B");
               break;
case 6:
             printf(" GRADE   C");
               break;
default: printf("Fail");
}
}

