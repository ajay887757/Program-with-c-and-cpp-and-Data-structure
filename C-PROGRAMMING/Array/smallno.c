//WAP to Find Biggest Element and its Position in Array of 10 Elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[10],i,small=32767,pos;
  float avg;
  printf("\nEnter 10 number:");
  for(i=0;i<10;i++)
	 scanf("%d",&x[i]);
  for(i=0;i<10;i++)
  {
	 if(x[i]<small)
	 {
		small=x[i];
		pos=i;
	 }
  }
  printf("\nsmalest no =%d and its position =%d",small,pos+1);
  getch();
}