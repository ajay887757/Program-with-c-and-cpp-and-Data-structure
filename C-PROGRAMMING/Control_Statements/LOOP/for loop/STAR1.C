//Ractangle of Stars
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,no=6;
  clrscr();
  for(i=0;i<no;i++)
  {
	 for(j=0;j<no;j++)
		printf(" ");
	 for(j=0;j<no-i;j++)
		printf(" ");
	 for(j=0;j<2*i+1;j++)
		printf("*");
	 printf("\n");
	}
	for(i=0;i<no;i++)
	{
		for(j=0;j<no-i;j++)
		  printf(" ");
		for(j=0;j<=i;j++)
		  printf("*");
		for(j=0;j<2*no-1;j++)
		  printf(" ");
		for(j=0;j<=i;j++)
		  printf("*");
		printf("\n");
	}
	no--;
	for(i=0;i<no;i++)
	{
	  for(j=0;j<=i+1;j++)
			printf(" ");
	  for(j=0;j<no-i;j++)
			printf("*");
	  for(j=0;j<2*no+1;j++)
			printf(" ");
	  for(j=0;j<no-i;j++)
			printf("*");
	  printf("\n");
	}
	no++;
	for(i=0;i<no;i++)
	{
	  for(j=0;j<no;j++)
		 printf(" ");
	  for(j=0;j<=i;j++)
		 printf(" ");
	  for(j=0;j<2*(no-i)-1;j++)
		 printf("*");
	  printf("\n");
	}
}
