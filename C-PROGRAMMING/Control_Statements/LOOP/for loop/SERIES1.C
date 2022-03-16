//WAP to Calculate Sum of Series
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,s=0,no,x;
	clrscr();
	printf("\nEnter value of X and  no of steps :");
	scanf("%d%d",&x,&no);
	for(i=0;i<no;i++)
	  s=s+pow(x,i)*pow(-1,i);
	printf("\nSum of series=%d",s);
	getch();
}



