//WAP to Find Bigget Number Among given 2 Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  printf("\nEnter two number:");
  scanf("%d%d",&a,&b);
  if(a>b)
	 printf(" \na is big");
  if(b>a)
	 printf(" \nb is big");
  if(a==b)
	 printf(" \na & b are equal");
}