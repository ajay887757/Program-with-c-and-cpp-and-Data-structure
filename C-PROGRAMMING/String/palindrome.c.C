//WAP to check Entered String is Palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,j=0;
  char str1[30];
  clrscr();
  printf("\nEnter a string:");
  gets(str1);
  for(j=(strlen(str)-1);i<j;i++,j--)
  {
	 if(str1[j]!=str1[i])
	 {
		printf("\n'%s' is not a palindrom",str1);
		return;
	 }
  }
  printf("\n'%s' is palindrom",str1);
  getch();
}