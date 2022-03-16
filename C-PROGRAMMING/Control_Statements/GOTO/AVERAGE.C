//WAP to Calculate Average of 10 Numbers without using Loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,sum=0,i=1;
  clrscr();
  aa:   //level of goto
  printf("enter %d no=",i);
  scanf("%d",&no);
  sum+=no;
  i++;
  if(i<=10)
	 goto aa;  //to shift the control
  printf("\n avg of nos=%f",sum/10.0);
  getch();
}
