//WAP to Calculate Summation of Upper Triangle, Lower Tringle and Diagonal
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][3],nou=0,nod=0,nol=0,i,j;
  clrscr();
  printf("enter x and y array");
  for(i=0;i<3;i++)
  {
	for(j=0;j<3;j++)
	 {
		scanf("%d",&x[i][j]);
		if(i==j)
		  nod+=x[i][j];
		if(i<=j)
		  nou+=x[i][j];
		if(i>=j)
		  nol+=x[i][j];
	 }
  }
  printf(" \n addition of digonal element=%d",nod);
  printf(" \n addition of upper element=%d",nou);
  printf(" \n addition of lower element=%d",nol);
  getch();
}
