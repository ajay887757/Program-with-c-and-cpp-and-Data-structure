//WAP to Reverse a String
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,j;
  char s1[30],ch;
  printf("\nEnter a string:");
  gets(s1);
  for(j=(strlen(s1)-1);i<j;i++,j--)
  {
	 ch=s1[i];
	 s1[i]=s1[j];
	 s1[j]=ch;
  }
  puts(s1);
}
