//WAP to print a String in Reverse order Using Recursion
#include<stdio.h>
#include<conio.h>
void main()
{
  char s[20];
  void revs(char *);
  printf("Enter a String");
  gets(s);
  revs(s);
  getch();
}
void revs(char *p)
{
  if(*p!='\0')
	 return;
  else
  {
	 revs(p+1);
	 printf("%c",*p);
  }
}