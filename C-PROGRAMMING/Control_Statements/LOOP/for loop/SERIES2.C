//WAP to Calculate Sum of Series
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,no,x;
	long f;
	float s=0;
	clrscr();
	printf("\nEnter  value of X:");
	scanf("%d",&x);
	printf("\nEnter  no of steps :");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
	  for(j=1,f=1;j<=i;j++)
		 f=f*j;
	  s=s+pow(x,i)/(float)f;
	}
	printf("\nSum of series=%f",s);
	getch();
}
