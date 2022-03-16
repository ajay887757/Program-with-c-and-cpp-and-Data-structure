//DCBA
// CBA
//  BA
//   A
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
	  for(j=0;j<=i;j++)
		 printf("  ");
	  for(j=64+no-i; j>=65;j-- )
		 printf(" %c",j);
	  printf("\n");
	}
   getch();
}



