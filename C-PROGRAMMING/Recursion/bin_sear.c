//Binary Search using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[10]={12,34,56,66,70,84,91,99,106,120};
  int se,z;
  int bin_search(int *,int,int,int);
  clrscr();
  printf("Enter Element to be Search");
  scanf("%d",&se);
  z=bin_search(x,se,0,9);
  if(z!=0)
	  printf("Found and Position = %d",z);
  else
	 printf("Not Found");
  getch();
}
int bin_search(int *p,int s,int lb,int ub)
{
  int mb;
  if(lb>ub)
	 return 0;
  else
  {
	 mb=(lb+ub)/2;
	 if(s==*(p+mb))
		return (mb+1);
	 else if(s>*(p+mb))
		bin_search(p,s,mb+1,ub);
	 else
		bin_search(p,s,lb,mb-1);
  }
}
