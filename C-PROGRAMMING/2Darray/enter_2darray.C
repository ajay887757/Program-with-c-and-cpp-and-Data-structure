//WAP to scan and print a DDA
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][4],i,j;
  clrscr();
  printf("\n   %d   %d   %d",sizeof(x),sizeof(x[0]),sizeof(x[0][0]));
  printf("\nEnter 12 no:");
  for(i=0;i<3;i++)
  {
	 for( j=0;j<4;j++)
		scanf("%d",&x[i][j]);
  }
  printf("\nEntered  Array is:\n");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
		printf("   %d",x[i][j]);
	 printf("\n");
  }
  getch();
}
