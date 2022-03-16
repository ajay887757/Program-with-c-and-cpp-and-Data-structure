//WAP to Calculate Length of a String
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  int i=0;
  clrscr();
  printf("\nEnter youre name:");
  scanf("%s",str);
  while(str[i]!='\0')
  {
	 i++;
  }
  printf("\ntotal character=%d",i);
  getch();
}