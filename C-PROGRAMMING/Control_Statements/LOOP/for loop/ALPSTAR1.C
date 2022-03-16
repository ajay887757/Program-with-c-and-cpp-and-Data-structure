//ABCD
//ABC
//AB
//A
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
		for(j=65; j<65+no-i ;j++ )
		{
		  printf(" %c",j);
		}
		printf("\n");
	}
	getch();
}
