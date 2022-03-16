//WAP to print PASCAL Triangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no,k,t;
	long f1,f2,f3;
	clrscr();
	printf("\nEnter a no:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
	  for(j=0;j<no-i;j++)
		 printf("  ");
	  for(j=0;j<=i;j++)
	  {
		 for(k=1,f1=1;k<=i;f1*=k++);
		 for(k=1,f2=1;k<=j;f2*=k++);
		 for(k=1,f3=1;k<=i-j;f3*=k++);
			t=f1/(f2*f3);
		 printf("%4d",t);
	  }
	  printf("\n");
	}
	getch();
}