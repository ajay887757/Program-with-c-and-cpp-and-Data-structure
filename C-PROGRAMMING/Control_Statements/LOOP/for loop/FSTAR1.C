//Nested Loop
#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,no;
   clrscr();
   printf("\nEnter no of row:");
   scanf("%d",&no);
   for(i=0;i<no;i++)
   {
	  for(j=0 ; j<=i  ;j++)
		 printf(" %d%d",i,j);
	  printf("\n");
	}
   getch();
}