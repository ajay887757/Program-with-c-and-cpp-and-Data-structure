//   *
//  **
// ***
//****
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,no;
	clrscr();
	printf("\nEnter a no:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
	  for(j=0;j<no-1-i;j++)
		 printf(" ");
	  for(j=0;j<i+1;j++)
		 printf("*");
	  printf("\n");
	}
	getch();
}
