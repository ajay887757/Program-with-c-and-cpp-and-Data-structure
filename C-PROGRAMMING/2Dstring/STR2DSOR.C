//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10][20];
  char temp[20];
  int i,j;
  clrscr();
  printf("\nEnter 10 names:");
  for(i=0;i<10;i++)
	 gets(str[i]);
  printf("\nBefore sorting entered names  are:");
  for(i=0;i<10;i++)
	 printf("\n  %s",str[i]);
  for(i=0;i<10;i++)
  {
	  for(j=0;j<9-i;j++)
	  {
		 if(strcmp(str[j],str[j+1])>0)
		 {
			strcpy(temp,str[j]);
			strcpy(str[j],str[j+1]);
			strcpy(str[j+1],temp);
		 }
	  }
  }
  printf("\nAfter sorting entered names  are:");
  for(i=0;i<10;i++)
	 printf("\n  %s",str[i]);
  getch();
}
