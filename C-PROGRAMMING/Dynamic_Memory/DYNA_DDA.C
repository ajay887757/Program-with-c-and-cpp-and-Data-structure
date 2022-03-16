//WAP to Create Dynamic DDA
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  int row,i,j,(*p)[4];
  clrscr();
  printf("\n enter no of rows");
  scanf("%d",&row);
  p=(int (*)[4])malloc(row*4*sizeof(int));
  printf("enter array");
  for(i=0;i<row;i++)
  {
	 for(j=0;j<4;j++)
	 {
		scanf("%d",(*(p+i)+j));
	 }
  }
  printf("Entered Array is:\n");
  for(i=0;i<row;i++)
  {
	 for(j=0;j<4;j++)
	 {
		printf("%d",*(*(p+i)+j));
	 }
	 printf("\n");
  }
  free(p);
  getch();
}