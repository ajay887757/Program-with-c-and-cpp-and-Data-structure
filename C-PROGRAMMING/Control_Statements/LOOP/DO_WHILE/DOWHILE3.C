//WAP to Calculate Sum of Two Integers n Times
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,s;
	char ch;
   clrscr();
	do
	{
	  printf("Enter two no:");
	  scanf("%d%d",&x,&y);
	  s=x+y;
	  printf("Sum=%d",s);
	  printf("\ndo you want another sum?(y/n)");
	  ch=getche();
	}while(ch!='n');
}


