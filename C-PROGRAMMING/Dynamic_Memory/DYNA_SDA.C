//WAP to Create Dynamic SDA
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  int n,i,*p;
  clrscr();
  printf("\n enter no of elements");
  scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
  printf("enter array");
  for(i=0;i<10;i++)
	 scanf("%d",(p+i));
  printf("Entered Array is:\n");
  for(i=0;i<10;i++)
	 printf("%d\t",*(p+i));
  free(p);
  getch();
}